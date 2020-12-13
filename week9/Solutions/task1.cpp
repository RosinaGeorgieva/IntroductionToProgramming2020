#include <iostream>

const int MAX_ELEMENTS = 1024;

int main()
{

    int size1, size2;
    int count = 0;
    int arr1[MAX_ELEMENTS], arr2[MAX_ELEMENTS];

    std::cout << "Size1: ";
    std::cin >> size1;

    std::cout << "Array1: ";
    for (int i = 0; i < size1; i++)
    {
        std::cin >> arr1[i];
    }

    std::cout << "Size2:";
    std::cin >> size2;

    std::cout << "Array2: ";
    for (int i = 0; i < size2; i++)
    {
        std::cin >> arr2[i];
    }

    if (size1 <= size2)
    {
        for (int i = 0; i <= size2 - size1; i++)
        {
            int j = 0;
            while (arr1[j] == arr2[j + i] && j < size1 - 1)
            {
                j++;
            }

            if (arr1[j] == arr2[j + i])
            {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
    else
    {
        std::cout << "Size1 > Size2\n";
    }

    return 0;
}
