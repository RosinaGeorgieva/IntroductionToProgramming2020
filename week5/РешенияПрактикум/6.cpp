#include <iostream>

using namespace std;

int main() {
	for (int i = 7; i >= 1; i--) {
		for (int k = 1; k <= 7 - i; k++) {
			cout << " "<< " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << j << " " ;
		}
		cout << endl;
	}
	return 0;
}