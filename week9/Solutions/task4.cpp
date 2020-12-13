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

void strcpy(char *source, char *recipient)
{
    for (int i = 0; i < strlen(source); i++)
    {
        recipient[i] = source[i];
    }
    recipient[strlen(source)] = '\0';
}

int main()
{
    char str[MAX_ELEMENTS];
    char str2[MAX_ELEMENTS];

    std::cout << "String:";
    std::cin.getline(str, MAX_ELEMENTS);

    strcpy(str, str2);
    std::cout << str << "\n"
              << str2 << "\n";

    return 0;
}
