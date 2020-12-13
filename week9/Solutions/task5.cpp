#include <iostream>

const int MAX_ELEMENTS = 256;

int strcmp(char *str1, char *str2)
{
    while (*str1)
    {
        if (*str1 != *str2)
        {
            break;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main()
{
    char str1[MAX_ELEMENTS], str2[MAX_ELEMENTS];
    std::cout << "Input first string:";
    std::cin.getline(str1, MAX_ELEMENTS);

    std::cout << "Input second string:";
    std::cin.getline(str2, MAX_ELEMENTS);

    std::cout << strcmp(str1, str2) << std::endl;

    return 0;
}
