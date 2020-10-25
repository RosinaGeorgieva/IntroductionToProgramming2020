#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;

	int first_digit = number / 10000;
	int second_digit = number / 1000 % 10;
	int third_digit = number / 100 % 10;
	int forth_digit = number / 10 % 10;
	int fifth_digit = number % 10;

	//палиндром наричаме число (или в общия случай низ),
	//чийто прочит е еднакъв отзад напред и отпред назад;
	//палиндроми са числата 45354, 67676,
	//низовете VelleV, боб;
	//палиндроми не са 4545 и лебед.
	
	//ако числото ни е от вида abcde, за да бъде палиндром,
	//искаме a == e && b == d:
	if (first_digit == fifth_digit && second_digit == forth_digit) {
		cout << "Is palindrome.";
	} else {
		cout << "Is not palindrome.";
	}
	return 0;
}