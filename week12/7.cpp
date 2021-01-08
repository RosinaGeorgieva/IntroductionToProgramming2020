#include <iostream>

using namespace std;

int sumForCurrentDiagn(int** matrix, int n, int numDiag) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (numDiag - 1 == i + j) {
				sum += matrix[i][j];
			}
		}
	}
	return sum;
}


bool checkParalelToMainDiag(int** matrix, int n) {
	for (int i = 1; i <= 9; i++) {
		int sum = sumForCurrentDiagn(matrix, n, i);
		if (sum % i != 0) {
			return false;
		}
	}
	return true;
}

void inputSquareMatrix(int** matrix, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
}

int main() {
	int n = 4;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
	}

	inputSquareMatrix(matrix, n);
	
	cout << checkParalelToMainDiag(matrix, n);
	
	return 0;
}