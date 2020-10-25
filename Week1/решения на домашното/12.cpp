#include <iostream>

using namespace std;

int main() {
	char first_symbol, second_symbol, third_symbol;
	cin >> first_symbol >> second_symbol >> third_symbol;

	int first_symbol_digit = first_symbol - '0';
	int second_symbol_digit = second_symbol - '0';
	int third_symbol_digit = third_symbol - '0';

	int result = first_symbol_digit * 100 + second_symbol_digit * 10 + third_symbol_digit;
	cout << result;
	return 0;
}