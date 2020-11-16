#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    //while 2 divides n, print 2 and divide n
    while (n % 2 == 0)  
    {  
        cout << 2 << " ";  
        n = n/2;  
    }  

    for (int i = 3; i <= sqrt(n); i = i + 2)  //we need only odd factors and the largest prime factor of a number can be atmost the square root of that number
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            cout << i << " ";  
            n = n / i;  
        }  
    }  
    
    // handle the case when n is a prime number itself n > 2 
    if (n > 2)  
        cout << n << " ";

    return 0;
}