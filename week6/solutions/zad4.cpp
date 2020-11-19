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

int main()
{
    int n;
    std::cin >> n;
    std::cout << std::boolalpha << isPalindrome(n) << std::endl;
    return 0;
}
