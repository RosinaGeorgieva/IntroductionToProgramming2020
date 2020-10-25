#include <iostream>

using namespace std;

int main() {
	double first_number, second_number, third_number;
	cin >> first_number >> second_number >> third_number;

	//неравенство на триъгълника:
	//три произволни цели числа а, b, c могат да бъдат дължини на страни на триъгълник, ако е изпълнена системата
	//a < b + c && b < a + c && c < a + b, т.е. всяка страна е по-малка от сумата на другите две.
	if (first_number < second_number + third_number && second_number < first_number + third_number && third_number < first_number + second_number) {
		cout << "is a triangle.";
	}
	else {
		cout << "isn't triangle.";
	}
	return 0;
}