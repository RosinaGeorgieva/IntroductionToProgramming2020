#include <iostream>

const int N = 3;

int sum(int (*matrix)[N], int n)
{
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                answer += matrix[i][j];
            }
            if (i == n - j - 1)
            {
                answer += matrix[i][j];
            }
        }
    }
    return answer;
}

int main()
{
    int matrix[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << sum(matrix, N) << std::endl;

    return 0;
}
