#include <iostream>

using namespace std;

int main() {
	int first_number, second_number;
	cin >> first_number >> second_number;
	//две числа са равни тстк резултатът от техния xor e 0:
	//пр. 3 != 2 (011 xor 010 == 001), 2 == 2 (010 xor 010 == 000):
	if ((first_number ^ second_number) == 0) {
		cout << "Numbers are equal." << endl;
	} else {
		cout << "Numbers are not equal." << endl;
	}
	return 0;
}