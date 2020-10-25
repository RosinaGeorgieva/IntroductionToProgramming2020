#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;

	if (number < 1075 || number > 8001) {
		cout << "Error!";
	} else {
		if (number % 2 == 0 && number % 5 == 0) {
			cout << "Divisible by 10." << endl;
		}
		if (number % 6 == 0) {
			cout << "Divisible by 6." << endl;
		}
		if (number % 21 == 0) {
			cout << "Divisible by 21." << endl;
		}
	}
	return 0;
}