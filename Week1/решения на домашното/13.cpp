#include <iostream>

using namespace std;

int main() {
	int x, k;
	cin >> x >> k;

	int result = (x / (pow(10, k - 1))) % 10;

	cout << result;
	return 0;
}