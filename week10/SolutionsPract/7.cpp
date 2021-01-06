#include <iostream>

using namespace std;

bool equal(int* arr1, int* arr2, int n, int m) {
	bool contains = false;
	int temp;

	for (size_t i = 0; i < n; i++) {
		temp = arr1[i];
		contains = false;
		for (size_t j = 0; j < m; j++) {
			if (arr2[j] == temp) {
				contains = true;
			}
		}
		if (!contains) {
			return false;
		}
	}
	for (size_t i = 0; i < n; i++) {
		temp = arr1[i];
		contains = false;
		for (size_t j = 0; j < m; j++) {
			if (arr2[j] == temp) {
				contains = true;
			}
		}
		if (!contains) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int m; 
	cin >> m;
	int* b = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	bool areEqual = equal(a, b, n, m);
	if (areEqual) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	return 0;
}