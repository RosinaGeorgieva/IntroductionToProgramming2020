#include <iostream>

using namespace std;

int main() {
	char symbol;
	cin >> symbol;

	if (symbol >= 65 && symbol <= 90) {
		cout << "Symbol is a capital letter.";
	}
	else if (symbol >= 97 && symbol <= 122) {
		cout << "Symbol is a small letter.";
	}
	else if (symbol >= 48 && symbol <= 57) {
		cout << "Symbol is a digit.";
	}
	else {
		cout << "Symbol is neither a letter, nor a digit.";
	}
	return 0;
}