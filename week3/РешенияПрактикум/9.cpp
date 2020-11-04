#include <iostream>

using namespace std;

int main() {
	int month;
	cin >> month;
	//ако месецът е четен и преди август,
	//има 30 или 29 дни; ако е четен и преди август и е февруари, има 29 дни;
	//ако е нечетен и преди август, има 31 дни;
	//ако е след август - обратно.
	switch (month % 2) {
	case 0: 
		if (month <= 7) {
			if (month == 2) {
				cout << 29 << endl;
			}
			else {
				cout << 30 << endl;
			}
		} else {
			cout << 31 << endl;
		}
		break;
	default: // в случая е същото като case 1, т.к. имаме само 2 кейс-а: остатък 0 и остатък 1;
		if (month <= 7) {
			cout << 31;
		} else {
			cout << 30 << endl;
		}
		break;
	}
	return 0;
}