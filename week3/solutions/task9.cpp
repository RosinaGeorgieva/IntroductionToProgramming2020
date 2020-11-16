#include <iostream>
using namespace std;

int main() {
    /*
    int number, power; 
    cin >> number >> power;
    int product = 1;
    while(power > 0) {
        product *=  number;
        power--;
    }
    cout << product;
    */
   // fast power algorithm O(log power)
   long long base, power, result = 1;
   cin >> base >> power;
   while(power > 0) {
       if (power % 2 == 1) { // we can also use the faster (power & 1)
            result *= base;
       }
       base *= base;
       power /= 2; // we can also use the faster (power >>= 1)
   }
   cout << result;

    return 0;
}