#include <iostream>

const int MAX_ELEMENTS = 20;

int main()
{
    int n;
    std::cin >> n;
    int arr[MAX_ELEMENTS];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << arr[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[n - 1 - i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
