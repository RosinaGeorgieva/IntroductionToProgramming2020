#include <iostream>
#include <cstring>

const int MAX_ASCI = (1 << 8) - 1;
const int MAX_SENT = 1 << 12;

int main()
{
    int symbols[MAX_ASCI] = {0};

    char str[MAX_SENT];
    int idx = 0;

    std::cin.getline(str, MAX_SENT, '!');
    for (int i = 0; i < strlen(str); i++)
    {
        symbols[(int)str[i]]++;
    }

    for (int i = 0; i < MAX_ASCI; i++)
    {
        if (symbols[i] != 0)
        {
            std::cout << (char)i << " -- " << symbols[i] << std::endl;
        }
    }

    return 0;
}
