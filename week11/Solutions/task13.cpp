#include <iostream>
/*
Даден е лабиринт под формата на матрица NxM, където свободно квадратче се
отбелязва с ‘.’, а стена – с ‘-’. Намерете има ли път от квадратче 0x0 до квадратче (N-
1)x(M-1), движейки се в четирите основни посоки.
Пример:
Вход:
4 4
. - - .
. . - -
. - . .
. . . .
Изход:
Yes
Вход:
3 5
. - - . .
- . - - -
. . . . .
Изход:
No*/
bool outOfBounds(int x, int y, int n, int m)
{
    return x < 0 || y < 0 || x >= n || y >= m;
}

void printPath(char *path)
{
    while (*path)
    {
        std::cout << *path << " ";
        path++;
    }

    std::cout << std::endl;
}

bool findPath(char **map, int n, int m, int x, int y, int finalX, int finalY)
{
    if (outOfBounds(x, y, n, m) || map[x][y] == '-')
    {
        return false;
    }
    if (x == finalX && y == finalY && map[x][y] == '.')
    {
        return true;
    }
    map[x][y] = '-';
    return (findPath(map, n, m, x + 1, y, finalX, finalY) ||
            findPath(map, n, m, x - 1, y, finalX, finalY) ||
            findPath(map, n, m, x, y + 1, finalX, finalY) ||
            findPath(map, n, m, x, y - 1, finalX, finalY));
}

void findPath(char **map, int n, int m, int x, int y, int finalX, int finalY, char *path, int pathIndex)
{
    if (outOfBounds(x, y, n, m) || map[x][y] == '-')
    {
        return;
    }
    if (x == finalX && y == finalY)
    {
        path[pathIndex++] = '\0';
        printPath(path);
        pathIndex--;
    }

    map[x][y] = '-';

    x = x + 1;
    path[pathIndex++] = 'D';
    findPath(map, n, m, x, y, finalX, finalY, path, pathIndex);
    pathIndex--;
    x = x - 1;

    x = x - 1;
    path[pathIndex++] = 'U';
    findPath(map, n, m, x, y, finalX, finalY, path, pathIndex);
    pathIndex--;
    x = x + 1;

    y = y - 1;
    path[pathIndex++] = 'L';
    findPath(map, n, m, x, y, finalX, finalY, path, pathIndex);
    pathIndex--;
    y = y + 1;

    y = y + 1;

    path[pathIndex++] = 'R';
    findPath(map, n, m, x, y, finalX, finalY, path, pathIndex);
    pathIndex--;

    y = y - 1;

    map[x][y] = '.';
}

int main()
{
    int n, m, startX, startY;
    std::cin >> n >> m;
    char **lab = new char *[n];
    for (int i = 0; i < n; i++)
    {
        lab[i] = new char[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> lab[i][j];
        }
    }

    const int finalX = 3;
    const int finalY = 3;
    std::cout << "Input position coorinates:" << std::endl
              << "startX: ";
    std::cin >> startX;
    std::cout << "startY: ";
    std::cin >> startY;

    // std::cout << std::boolalpha << findPath(lab, n, m, startX, startY, finalX, finalY) << std::endl;
    char *path = new char[n * m];
    findPath(lab, n, m, startX, startY, finalX, finalY, path, 0);

    for (int i = 0; i < n; i++)
    {
        delete[] lab[i];
    }

    delete[] lab;
    delete[] path;
    return 0;
}