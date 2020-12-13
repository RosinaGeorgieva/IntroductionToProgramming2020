#include <iostream>

bool subarray(int *first, int n1, int *second, int n2)
{
    // Two pointers to traverse the arrays
    int i = 0, j = 0;

    // Traverse both arrays simultaneously
    while (i < n1 && j < n2)
    {

        // If element matches
        // increment both pointers
        if (first[i] == second[j])
        {
            i++;
            j++;
            // If array B is completely
            // traversed
            if (j == n2)
            {
                return true;
            }
        }
        // If not,
        // increment i and reset j
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }

    return false;
}

bool subarrays(int *arrays[], int npointers, int *arrlengths)
{
    for (int i = 0; i < npointers; i++)
    {
        for (int j = i + 1; j < npointers; j++)
        {
            if (subarray(arrays[i], arrlengths[i], arrays[j], arrlengths[j]))
            {
                std::cout << "We have subsets in arrays: " << i << " and " << j << "\n";
                return true;
            }
        }
    }
    return false;
}

int main()
{

    const int length = 4;
    int a1[] = {0, 1},
        a2[] = {11, 4, 1},
        a3[] = {60, 44, 78, -5},
        a4[] = {44, 78},
        *a5[] = {a1, a2, a3, a4},
        s[] = {sizeof(a1) / sizeof(int), sizeof(a2) / sizeof(int), sizeof(a3) / sizeof(int), sizeof(a4) / sizeof(int)};

    std::cout << std::boolalpha << subarrays(a5, length, s) << std::endl;

    return 0;
}
