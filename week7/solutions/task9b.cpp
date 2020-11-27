#include <iostream>

const int MAX_ELEMENTS = 1024;

int main()
{
    int size1, size2;
    bool doesntContain;

    std::cout << "Size of the first array:";
    std::cin >> size1;

    std::cout << "Array 1:";
    int arr1[MAX_ELEMENTS];

    for (int i = 0; i < size1; i++)
    {
        std::cin >> arr1[i];
    }

    std::cout << "Size of the second array:";
    std::cin >> size2;

    std::cout << "Array 2:";
    int arr2[MAX_ELEMENTS];

    for (int i = 0; i < size2; i++)
    {
        std::cin >> arr2[i];
    }

    // std::cout << "Different numbers" << std::endl;

    for (int i = 0; i < size1; i++)
    {
        doesntContain = true;

        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                doesntContain = false;
            }
        }

        if (arr1[i] % 3 != 0 && doesntContain == true)
        {
            std::cout << arr1[i] << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
