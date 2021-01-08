#include <iostream>

using namespace std;

int sumOfRow(int* row, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += row[i];
	}

	return sum;
}

void swapTwoRows(int* rowOne, int* rowTwo, int n) {
	for (int i = 0; i < n; i++) {
		int helper = rowOne[i];
		rowOne[i] = rowTwo[i];
		rowTwo[i] = helper;
	}
}

void sortMatrixRows(int** matrix, int n) {
	int minIndex;
	for (int i = 0; i < n - 1; i++) {
		minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (sumOfRow(matrix[minIndex], n) > sumOfRow(matrix[j], n)) {
				minIndex = j;
			}
		}
		swapTwoRows(matrix[i], matrix[minIndex], n);
	}
}

void inputSquareMatrix(int** matrix, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
}

void outputSquareMatrix(int** matrix, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int n = 4;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int;
	}

	inputSquareMatrix(matrix, n);
	
	sortMatrixRows(matrix, n);
	outputSquareMatrix(matrix, n);
	
	return 0;
}