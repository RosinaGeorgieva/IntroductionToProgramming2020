#include <iostream>

using namespace std;

int main() {
	double number;

	cin >> number;

	int integer_part = floor(number);
//	еквивалентно:
//	int integer_part = (int)number;
//	int integer_part = static_cast<int>(number);
	
	cout << integer_part;
	return 0;
}