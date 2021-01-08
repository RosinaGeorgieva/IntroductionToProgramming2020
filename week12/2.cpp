#include <iostream>

using namespace std;

int func(int x, int sum, int diff) {
	if (x > 9) {
		return INT16_MIN;
	}

	if (9 * (sum - x - x) == diff) {
		return 10 * x + (sum - x);
	}

	return func(x + 1, sum, diff);
}

int main() {
	int sum = 12;
	int diff = 36;
	cout << func(0, sum, diff);
	
	return 0;
}