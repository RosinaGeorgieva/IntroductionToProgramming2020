#include <iostream>

const int MAX_ELEMENTS = 256;

int strlen(char *str)
{
    int count = 0;
    while (*str)
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char str[MAX_ELEMENTS];

    std::cout << "String: ";
    std::cin.getline(str, MAX_ELEMENTS);
    std::cout << "Size:" << strlen(str) << std::endl;

    return 0;
}
