#include <iostream>

using namespace std;

int main() {
	//извежда малката буква и аски кода по голяма буква

	char symbol;
	cin >> symbol;
	//еквивалентно може и (int)symbol >= 97 && (int)symbol <=122
	if (symbol >= 97 && symbol <= 122) {
		char upper_case_symbol = symbol - 32;
		cout << upper_case_symbol << "->" << (int)upper_case_symbol;
	} else {//правим проверката дали въведената буква е малка, т.е. дали въобще можем да намерим съответстващата ѝ голяма.
		cout << "Not a small letter."; 
	}

	return 0;
}