#include <iostream>

using namespace std;

int main() {
	double first_number;
	double second_number;

	cin >> first_number >> second_number;

	//a) с помощна променлива; в случая променливата с;
	double c = first_number;
	first_number = second_number;
	second_number = c;
	cout << "a=" << first_number << " b=" << second_number << endl;

	//б) с аритметични операции
	first_number = first_number + second_number;
	second_number = first_number - second_number;
	first_number = first_number - second_number;
	cout << "a=" << first_number << " b=" << second_number << endl;
	return 0;
}