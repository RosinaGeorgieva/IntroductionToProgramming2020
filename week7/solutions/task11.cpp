#include <iostream>

int main()
{
    int n;
    double sum = 0.0;
    std::cin >> n;
    double a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> a;
            if (i > j)
            {
                sum += a;
            }
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
