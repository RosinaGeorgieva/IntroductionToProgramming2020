#include <iostream>
#include <cstring>

bool numberCheck(char symbol)
{
    return (symbol >= '0' && symbol <= '9');
}

int apply(char oper, int larg, int rarg)
{
    switch (oper)
    {
    case '+':
        return larg + rarg;
    case '*':
        return larg * rarg;

    default:
        return 0;
    }
}

int ind = 0;

int calculate(char *str)
{

    if (str[ind] == '\0')
    {
        return 0;
    }

    int larg;

    if (str[ind] == '(')
    {
        ind++;
        larg = calculate(str);
    }

    if (numberCheck(str[ind]))
    {
        larg = str[ind++] - '0';
    }

    if (str[ind] == ')' || str[ind] == '\0')
    {
        ind++;
        return larg;
    }

    char op = str[ind++];

    int rarg = calculate(str);

    return apply(op, larg, rarg);
}

int main()
{
    const int MAX_SIZE = 64;
    char input[MAX_SIZE];
    std::cin.getline(input, MAX_SIZE);

    std::cout << calculate(input) << std::endl;
    return 0;
}