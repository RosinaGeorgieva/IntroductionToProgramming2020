#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;

	int last_digit = number % 10;
	int second_digit = number / 10 % 10;
	int first_digit = number / 100 % 10;

	cout << last_digit << "-" << second_digit << "-" << first_digit;
	return 0;
}