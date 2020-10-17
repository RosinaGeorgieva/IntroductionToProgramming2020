#include <iostream>

using namespace std;

int main() {
	double radius;
	cin >> radius;

	const double pi = 3.14; // добра практика е да се изнасят константи, за да няма "магически числа" в кода

	double C = 2 * radius * pi;
	cout << "Дължина: " << C << endl;

	double S = pi * pow(radius, 2);
	cout << "Лице на кръг: " << S << endl;
	return 0;
}