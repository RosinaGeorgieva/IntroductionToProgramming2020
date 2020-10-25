#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;
	if (number < 1001 || number > 8888) {
		cout << "Error!" << endl;
	} else {
		int m;
		cin >> m;
		int countOccurences = (number / 1000 == m) + (number / 100 % 10 == m) + (number / 10 % 10 == m) + (number % 10 == m);
		cout << countOccurences;
	}
	return 0;
}