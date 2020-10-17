#include <iostream>
using namespace std;

int main() {
    int firstNumber;
    int secondNumber;
    
    cin >> firstNumber >> secondNumber;

    // a = 0101, b = 1010
    firstNumber ^= secondNumber; //a1111  b1010
    secondNumber ^= firstNumber; //a1111  b0101
    firstNumber ^= secondNumber; //a1010  b0101

    cout << firstNumber << " " << secondNumber;
    
    return 0;
}