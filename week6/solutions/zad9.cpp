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

int getPrimesNum(int n)
{
    int currNum, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> currNum;
        if (isPrime(currNum))
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << getPrimesNum(n) << std::endl;
    return 0;
}
