#include <iostream>

using namespace std;

int main() {
	char symbol;
	cin >> symbol;

	//въведеният символ е буква тстк ASCII кодът му отговаря на ASCII кода на малка латинска буква или голяма латинска буква в таблицата;
	//ascii кода на символ достъпваме чрез преобразуването на char-a в int - (int)symbol /еквивалентен запис в случая е и (int)(symbol).
	cout << (((int)symbol >= 65 && (int)symbol <= 90) || ((int)symbol >= 97 && (int)symbol <= 122)) << endl;
	return 0;
}