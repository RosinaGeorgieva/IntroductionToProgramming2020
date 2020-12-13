#include <iostream>
#include <cstring>

const int MAX_ELEMENTS = 1024;

bool isPalindrome(char *str)
{
    int size = strlen(str);
    for (int i = 0; i < size / 2; i++)
    {
        if (str[i] != str[size - i - 1])
        {
            return false;
        }
    }
    return true;
}

int palindromeNumbers(char (*matrix)[MAX_ELEMENTS], int size)
{
    int count = 0;
    char pal[MAX_ELEMENTS];
    //rows
    for (int i = 0; i < size; i++)
    {
        if (isPalindrome(matrix[i]))
        {
            count++;
        }
    }
    //cols
    for (int i = 0; i < size; i++)
    {
        int k = 0;
        for (int j = 0; j < size; j++)
        {
            pal[k] = matrix[j][i];
            k++;
        }
        pal[k] = '\0';
        if (isPalindrome(pal))
        {
            count++;
        }
    }
    //diag
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        pal[k] = matrix[i][i];
        k++;
    }
    pal[k] = '\0';
    if (isPalindrome(pal))
    {
        count++;
    }
    //2nd diag
    k = 0;
    for (int i = 0; i < size; i++)
    {
        pal[k] = matrix[i][size - i - 1];
        k++;
    }
    pal[k] = '\0';
    if (isPalindrome(pal))
    {
        count++;
    }

    return count;
}

int main()
{
    char matrix[MAX_ELEMENTS][MAX_ELEMENTS];
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        //TODO easy init
        //cin.getline(matrix[i], MAX_ELEMENTS);
        for (int j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
        matrix[i][n] = '\0';
    }

    std::cout << palindromeNumbers(matrix, n) << std::endl;

    return 0;
}
