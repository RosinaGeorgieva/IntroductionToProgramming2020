#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;

	cout << (number >= 2) + (number >= 3) + (number >= 5) + (number >= 7) + (number >= 11) + (number >= 13) + (number >= 17) + (number >= 19) + (number >= 23);
	return 0;
}