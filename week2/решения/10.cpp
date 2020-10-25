#include <iostream>

using namespace std;

int main() {
	int first_number, second_number;
	cin >> first_number >> second_number;

	//числото Х се дели на числото У тстк остатъкът при делението Х/У е 0.
	if (first_number % second_number == 0) {
		cout << "First number is divisible by second number";
	} else {
		cout << "First number is not divisible by second number";
	}
	return 0;
}