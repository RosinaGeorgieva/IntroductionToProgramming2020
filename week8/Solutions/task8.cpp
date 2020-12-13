#include <iostream>
#include <cstring>

const int MAX_ELEMENTS = 1024;

void printArray(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

void swap(int *a, int *b)
{

    int c = *a;
    *a = *b;
    *b = c;
}

void swapEvens(int *arr, int n)
{
    int offset = (n % 2) ? 1 : 2;
    std::cout << offset << std::endl;
    for (int i = 0; i < n / 2; i += 2)
    {
        swap(arr + i, arr + n - i - offset);
    }
}

int main()
{
    int arr[MAX_ELEMENTS];
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    swapEvens(arr, n);
    printArray(arr, n);

    return 0;
}
