#include <iostream>

using namespace std;


int main() {
	char symbol;
	cin >> symbol;

	//трите преобразувания са еквивалентни; стр. 5 в теорията;
	cout << (int)symbol;
	//cout << int(symbol);
	//cout << static_cast<int>(symbol);
	
	return 0;
}