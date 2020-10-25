#include <iostream>

using namespace std;

int main() {
	double double_variable = 3.5;
	int integer_variable = double_variable;
	cout << double_variable << "->" << sizeof(double_variable) << endl;
	cout << integer_variable << "->" << sizeof(integer_variable) << endl;
	return 0;
}