#include <iostream>
/* 
int factRec(int n)
{
    if (n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
*/

int fact(int n)
{
    int product = 1;
    for (int i = 2; i <= n; i++)
    {
        product *= i;
    }
    return product;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << fact(n) << std::endl;
    return 0;
}
