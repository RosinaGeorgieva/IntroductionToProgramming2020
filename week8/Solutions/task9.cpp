#include <iostream>

bool duplicates(long *pointers[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (*pointers[i] == *pointers[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    long *p[6];
    long a = 0, b = 11, c = -6, d = 69, e = 0, f = 42;
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    p[3] = &d;
    p[4] = &e;
    p[5] = &f;

    std::cout << std::boolalpha << duplicates(p, 6) << std::endl;

    return 0;
}
