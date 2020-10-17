#include <iostream>

using namespace std;

int main() {
	int number;

	cin >> number;

	int last_digit = number % 10;
	int third_digit = number / 10 % 10;
	int second_digit = number / 100 % 10;
	int first_digit = number / 1000 % 10;

	cout << first_digit << " " << second_digit << " " << third_digit << " " << last_digit;
	return 0;
}