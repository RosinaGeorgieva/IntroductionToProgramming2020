#include <iostream>

const int MAX_ELEMENTS = 100;

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int n;
    std::cin >> n;
    int matrix[MAX_ELEMENTS][MAX_ELEMENTS];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (n - 1 - j >= i && isPrime(matrix[i][j]))
            {
                count++;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}
