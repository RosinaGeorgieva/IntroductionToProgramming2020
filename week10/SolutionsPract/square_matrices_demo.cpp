#include <iostream>

void printSquareMatrix(int* matrix[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main() {
	int matrix[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
	int size = 4;

	//main diagonal
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				std::cout << matrix[i][j];
			}
		}
	}

	for (int i = 0; i < size; i++) {
		std::cout << matrix[i][i] << " ";
	}

	//elements above main diagonal inclusive
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			std::cout << matrix[i][j] << " ";
		}
	}

	//elements above main diagonal exclusive
	for (int i = 0; i < size; i++) {
		for (int j = i+1; j < size; j++) {
			std::cout << matrix[i][j] << " ";
		}
	}

	//elements below main diagonal inclusive
	for (int i = 0; i < size; i++) {
		for (int j = 0; j <= i; j++) {
			std::cout << matrix[i][j] << " ";
		}
	}

	//elements below main diagonal exclusive
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			std::cout << matrix[i][j] << " ";
		}
	}

	//secondary diagonal
	for (int i = 0; i < size; i++) {
		std::cout << matrix[i][size - 1 - i] << " ";
	}

	//elements above secondary diagonal inclusive
	for (int i = 0; i < size; i++) {
		for (int j = 0; j <= size - 1 - i; j++) {
			std::cout << matrix[i][j] << " ";
		}
	}

	//elements above secondary diagonal exclusive
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			std::cout << matrix[i][j] << " ";
		}
	}

	//elements below secondary diagonal inclusive
	for (int i = 0; i < size; i++) {
		for (int j = size - 1 - i; j < size; j++) {
			std::cout << matrix[i][j] << " ";
		}
	}

	//elements below secondary diagonal exclusive
	for (int i = 0; i < size; i++) {
		for (int j = size - i; j < size; j++) {
			std::cout << matrix[i][j] << " ";
		}
	}
	return 0;
}