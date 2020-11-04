#include <iostream>

using namespace std;

int main() {
	double x, f_x;
	cin >> x; 

	if (x < 0) {
		f_x = 5 * x * sqrt(abs(x - 1));
	} else if (x == 0) {
		f_x = exp((x - 1) * 3);
	} else {
		f_x = 12 * floor(cbrt(x));
	}

	cout << "f(x) = " << f_x;
	return 0;
}