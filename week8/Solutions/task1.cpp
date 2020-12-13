#include <iostream>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void swap1(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

template <typename T>
void swapTemplate(T &first, T &second)
{
    T c = first;
    first = second;
    second = c;
}

int main()
{
    int a = 420, b = 69;
    swap(&a, &b);
    std::cout << a << " " << b << std::endl;
    swap1(a, b);
    std::cout << a << " " << b << std::endl;
    swapTemplate(a, b);
    std::cout << a << " " << b << std::endl;
    return 0;
}
