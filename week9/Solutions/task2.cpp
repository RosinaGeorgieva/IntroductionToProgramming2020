#include <iostream>

const int MAX_ELEMENTS = 20;

int main()
{

    char str[MAX_ELEMENTS];
    int size;

    std::cout << "Size: ";
    std::cin >> size;

    for (int i = 0; i < size; i++)
    {
        std::cin >> str[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        std::cout << str[i];
    }

    std::cout << std::endl;

    return 0;
}
