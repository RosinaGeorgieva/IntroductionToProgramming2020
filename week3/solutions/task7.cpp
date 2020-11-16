#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, product = 1, number;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> number;
        sum += number;
        product *= number;
    }
    cout << sum << " " << product << endl;
    return 0;
}