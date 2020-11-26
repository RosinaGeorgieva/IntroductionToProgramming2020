#include <iostream>

using namespace std;

int main() {
	int n;
	do {
		cin >> n;
	} while (n < 1 || n > 1000);
	int arr[1000];
	for (int i = 0; i < n; i++) {
		do {
			cout << "Enter value: ";
			cin >> arr[i];
			cout << endl;
		} while (arr[i] < 1 || arr[i] > 10000);
	}
	int sum = 0;
	int product = 1;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		product *= arr[i];
	}
	cout << "Sum is equal to: " << sum;
	cout << "Product is equal to: " << product;
	return 0;
}