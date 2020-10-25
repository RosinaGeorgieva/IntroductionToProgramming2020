#include <iostream>

using namespace std;

int main() {
	double first_side, second_side;
	cin >> first_side >> second_side;

	//един правоъгълник е квадрат тстк двете му страни са равни;
	if (first_side == second_side) {
		cout << "Is square." << endl;
	}

	double P = 2 * (first_side + second_side);
	cout << "Perimeter: " << P << endl;
	double S = first_side * second_side;
	cout << "Area: " << S << endl;
	return 0;
}