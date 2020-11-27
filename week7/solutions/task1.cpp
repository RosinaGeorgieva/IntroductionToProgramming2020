#include <iostream>

const int MAX_ELEMENTS = 20;

int main()
{

    int number;
    std::cin >> number;
    int arr[MAX_ELEMENTS];

    for (int i = 0; i < number; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < number; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
