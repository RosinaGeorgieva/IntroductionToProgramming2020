#include <iostream>

long long pow(int num, int power)
{
    long long ans = 1;
    for (int i = 0; i < power; i++)
    {
        ans *= num;
    }
    return ans;
}

long long getNum(int x, int n)
{
    return pow(x, pow(n, n));
}

int main()
{
    int x, n;
    std::cin >> x >> n;
    std::cout << getNum(x, n) << std::endl;
    return 0;
}
/*
4 3
18014398509481984
*/
