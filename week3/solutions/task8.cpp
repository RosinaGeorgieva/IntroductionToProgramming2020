#include <iostream>
using namespace std;

int main() {
    int n, product = 1;
    double number;
    do {
        cin >> n;
    } while (n <= 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> number;
        if(i % 2 == 0) {
            product *= number;
        }
    }
    cout << product;
    

    return 0;
}