#include <iostream>

void getPrimeMultipliers(int n)
{
    int k = 2;
    while (n != 1)
    {
        if (n % k == 0)
        {
            std::cout << k << " ";
            n = n / k;
        }
        else
        {
            k++;
        }
    }
    std::cout << std::endl;
}

int main()
{
    int n;
    std::cin >> n;
    getPrimeMultipliers(n);
    return 0;
}
