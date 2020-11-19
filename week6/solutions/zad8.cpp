#include <iostream>

double getAverage(int n)
{
    int currNum;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> currNum;
        sum += currNum;
    }

    if (n == 0)
    {
        return 0;
    }

    return sum / n;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << getAverage(n) << std::endl;
    return 0;
}
