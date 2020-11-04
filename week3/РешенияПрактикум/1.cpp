#include <iostream>

using namespace std;

int main() {
	double first_side, second_side, third_side;
	cin >> first_side >> second_side >> third_side;

	if (first_side == second_side && second_side == third_side) {
		cout << "Triangle is equilateral.";
	} else if ((first_side == second_side && first_side != third_side) || (first_side == third_side && first_side != second_side) || (third_side == second_side && first_side != third_side)) {
		cout << "Triangle is isosceles.";
	} else {
		cout << "Triangle is scalene.";
	}
	return 0;
}