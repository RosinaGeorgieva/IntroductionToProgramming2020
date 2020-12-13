#include <iostream>

const int MAX_ELEMENTS = 100;

int main()
{
    int n, m, prod = 1;
    std::cin >> n >> m;
    int matrix[MAX_ELEMENTS][MAX_ELEMENTS];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i >= m - 1 - j) && ((i + j) % 2 == 0))
            {
                prod *= matrix[i][j];
            }
        }
    }
    std::cout << prod << std::endl;

    return 0;
}
