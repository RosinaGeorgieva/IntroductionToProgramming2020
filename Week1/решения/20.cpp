#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;

	int one_less_than_number = number - 1;
	
	//доста готино обяснение на алгоритъма ще откриете на: https://iq.opengenus.org/detect-if-a-number-is-power-of-2-using-bitwise-operators/
	//двата записа отдолу са еквивалентни.
	cout << ((number & one_less_than_number) == 0);
	//cout << !(a & one_less_than_a);
	return 0;
}