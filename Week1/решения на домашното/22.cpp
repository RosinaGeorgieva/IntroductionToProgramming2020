#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int number_in_binary = 0;
    int order = 1; //разред - единици, десетици, стотици...
    for (int i = number; i > 0; i = i / 2) {
        number_in_binary = number_in_binary + (number % 2) * order;
        order = order * 10;
        number = number / 2;
    }
    cout << number_in_binary;

    return 0;
}