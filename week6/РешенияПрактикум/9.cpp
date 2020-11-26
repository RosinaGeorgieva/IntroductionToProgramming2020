#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int copyOfN = n;
	if (copyOfN >= 0 && copyOfN <= 9) {
		cout << "is pal";
	} else {
		int numberOfDigits = 0;
		while (copyOfN > 0) {
			numberOfDigits++;
			copyOfN /= 10;
		}
		int arr[100];
		if (numberOfDigits > 100) {
			cout << "Not enough memory allocated!";
		} else {
			for (int i = 0; i < numberOfDigits; i++) {
				arr[i] = n % 10;
				n /= 10;
			}
			for (int i = 0; i < numberOfDigits; i++) {
				cout << arr[i];
			}
			for (int i = 0; i < numberOfDigits / 2; i++) {
				if (arr[i] != arr[numberOfDigits - i - 1]) {
					cout << "olele! ne e palindrom!";
					break;
				}
			}
		}
	}
	return 0;
}