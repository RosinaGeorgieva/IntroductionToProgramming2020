#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int numberOfDigits = 0;
	int m = n;
	while (m > 0) {
		numberOfDigits++;
		m = m / 10;
	}
	bool isDifferent = 0;
	for (int i = 1; i <= numberOfDigits; i++) {
		if ((n / (int)pow(10, i - 1) % 10 != (n / (int)pow(10, (numberOfDigits - i)) % 10))) {
			isDifferent = 1;
			break;
		}
	}
	if (isDifferent) {
		cout << "Number is not palindrome." << endl;
	}
	else {
		cout << "Number is palindrome." << endl;
	}
	return 0;
}