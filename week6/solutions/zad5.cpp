#include <iostream>

bool isPalindrome(int n)
{
    int temp = n, reversed = 0;
    while (temp)
    {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    return n == reversed;
}

void getAllPalinds(int from, int to)
{
    // validate
    if (from > to)
    {
        int temp = from;
        from = to;
        to = temp;
    }
    for (int i = from; i <= to; i++)
    {
        if (isPalindrome(i))
        {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main()
{
    int from, to;
    std::cin >> from >> to;
    getAllPalinds(from, to);
    return 0;
}
