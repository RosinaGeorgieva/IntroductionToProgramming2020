#include <iostream>

bool contains(int *arr, int n, int search)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            return true;
        }
    }
    return false;
}

bool commonel(int *arrays[], int npointers, int *arrlengths)
{
    int *firstArray = arrays[0];
    int firstSize = arrlengths[0], val;
    bool contain;
    for (int i = 0; i < firstSize; i++)
    {
        contain = true;
        val = firstArray[i];
        for (int i = 1; i < npointers; i++)
        {
            if (!contains(arrays[i], arrlengths[i], val))
            {
                contain = false;
                break;
            }
        }
        if (contain)
        {
            std::cout << val << " ";
            return true;
        }
    }
    return false;
}

int main()
{
    const int length = 4;
    int a1[] = {0, 1},
        a2[] = {11, 4, 1},
        a3[] = {15, 1, -4, 3},
        a4[] = {-5, 1},
        *a5[] = {a1, a2, a3, a4},
        s[] = {sizeof(a1) / sizeof(int), sizeof(a2) / sizeof(int), sizeof(a3) / sizeof(int), sizeof(a4) / sizeof(int)};

    std::cout << std::boolalpha << commonel(a5, length, s) << std::endl;
    return 0;
}
