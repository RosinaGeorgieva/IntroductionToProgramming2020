#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double first_number, second_number;

	cin >> first_number >> second_number;

	cout << setprecision(7) << first_number / second_number;
	return 0;
}