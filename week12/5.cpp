#include <iostream>

using namespace std;

bool isSuchNumber(int x) {
	return x % 2 == 0 && x < 6;
}

int rowWithMaxCount(int** matrix, int n, int m) {
	int row = -1;
	int maxCount = 0;
	for (int i = 0; i < n; i++) {
		int currentCount = 0;
		for (int j = 0; j < m; j++) {
			if (isSuchNumber(matrix[i][j])) {
				currentCount++;
			}
		}
		if (currentCount > maxCount) {
			maxCount = currentCount;
			row = i;
		}
	}
	return row;
}

int sumForArray(int* row, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += row[i];
	}
	return sum;
}

int colWithMaxCount(int** matrix, int n, int m) {
	int col = -1;
	int maxCount = 0;
	for (int i = 0; i < m; i++) {
		int currentCount = 0;
		for (int j = 0; j < n; j++) {
			if (isSuchNumber(matrix[j][i])) {
				currentCount++;
			}
		}
		if (currentCount > maxCount) {
			maxCount = currentCount;
			col = i;
		}
	}
	return col;
}

int sum(int** matrix, int n, int m) {
	int row = rowWithMaxCount(matrix, n, m);
	int col = colWithMaxCount(matrix, n, m);
	int* maxCol = new int[n];
	for (int i = 0; i < n; i++) {
		maxCol[i] = matrix[i][col];
	}

	return sumForArray(matrix[row], m) + sumForArray(maxCol, n);
}

int main() {
	int** matrix = new int* [3];
	for (int i = 0; i < 3; i++) {
		matrix[i] = new int[4];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> matrix[i][j];
		}
	}
	cout << sum(matrix, 3, 4);
	return 0;
}