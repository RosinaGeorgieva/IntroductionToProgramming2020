#include <iostream>

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void getFirstPairPrimes(int from, int to)
{
    // validate
    if (from > to)
    {
        int temp = from;
        from = to;
        to = temp;
    }
    if (from % 2 == 0)
    { //четните числа не могат да са прости
        from++;
    }
    for (int i = from; i <= to - 2; i += 2)
    {
        if (isPrime(i) && isPrime(i + 2))
        {
            std::cout << i << " " << i + 2 << std::endl;
            return;
        }
    }
}

int main()
{
    int from, to;
    std::cin >> from >> to;
    getFirstPairPrimes(from, to);
    return 0;
}
