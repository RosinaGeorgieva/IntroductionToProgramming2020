#include <iostream>

bool outOfBounds(int x, int y, int size, bool **visited)
{
    return x < 0 || y < 0 || x >= size || y >= size || visited[x][y] == true;
}

bool wholeBoardIsVisited(bool **visited, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (visited[i][j] == false)
            {
                return false;
            }
        }
    }
    return true;
}

void print(char **path)
{
    while (*path != nullptr)
    {
        std::cout << *path;
        path++;
    }
}

char *getStep(int a, int b)
{
    char aChar = a + '0';
    char bChar = b + '0';
    char *result = new char[6];
    result[0] = aChar;
    result[1] = ',';
    result[2] = ' ';
    result[3] = bChar;
    result[4] = '\n';
    result[5] = '\0';
    return result;
}

int counter;

void findPath(int x, int y, char **path, bool **visited, int n, int &pathIndex)
{
    counter++;
    /*if (outOfBounds(x, y, n, visited)) {
		return;
	}*/
    if (wholeBoardIsVisited(visited, n))
    {
        path[pathIndex++] = nullptr;
        print(path);
        pathIndex--;
        return;
    }

    // backtracking
    visited[x][y] = true;
    // for all 8 directions
    int newX;
    int newY;
    char *step;
    for (int i = -2; i <= 2; i += 4)
    {
        for (int j = -1; j <= 1; j += 2)
        {
            newX = x + i;
            newY = y + j;
            if (!outOfBounds(newX, newY, n, visited))
            {
                step = getStep(newX, newY); // "2, 1\n\0"
                path[pathIndex++] = step;
                findPath(newX, newY, path, visited, n, pathIndex);
                pathIndex--;
                delete[] step;
            }

            newX = x + j;
            newY = y + i;
            if (!outOfBounds(newX, newY, n, visited))
            {
                step = getStep(newX, newY);
                path[pathIndex++] = step;
                findPath(newX, newY, path, visited, n, pathIndex);
                pathIndex--;
                delete[] step;
            }
        }
    }
    visited[x][y] = false;
}

// O(8^(N^2)) - doesn't compute in human time
int knightsWalk()
{
    //Задача: Дадено е естествено число n(n > 4) и обобщена шахматна дъска с размер nxn
    //клетки.Да се намери обхождане на дъската с хода на коня.Всяка клетка от дъската трябва да
    //Глава 6 - Търсене с връщане.NP - пълни задачи 386
    //бъде посетенa точно веднъж, като “обиколката” започва от клетката, намираща се в долния ляв
    //ъгъл.Допустими ходове за коня са стандартните от шахмата, както е показано на фигура 6.3.4а
    int n = 6;
    // visited
    bool **visited = new bool *[n];

    for (int i = 0; i < n; i++)
    {
        visited[i] = new bool[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = false;
        }
    }
    // down left
    int startPosX = n - 1;
    int startPosY = 0;
    char **path = new char *[n * n + 1]; //4, 6\n\0
    for (int i = 0; i < n * n + 1; i++)
    {
        path[i] = nullptr;
    }
    int pathIndex = 0;
    findPath(startPosX, startPosY, path, visited, n, pathIndex);

    delete[] path;

    for (int i = 0; i < n; i++)
    {
        delete[] visited[i];
    }
    delete[] visited;

    return 0;
}