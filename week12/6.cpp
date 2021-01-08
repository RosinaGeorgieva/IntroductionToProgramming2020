#include <iostream>

using namespace std;

bool hasPathFromCurrentCell(bool** matrix, int n, const char* path, int x, int y) {
	if (matrix[x][y] == 0) {
		return false;
	}

	if (x < 0 || x > n - 1 || y < 0 || y > n - 1) {
		return false;
	}

	if (x == n - 1 && y == n - 1 && matrix[x][y] == 1 && path[0] == '\0') { //ako iskame da e chast ot putq e taka; inache dobavqme path[1] == '\0'
		return true;
	}

	if (path[0] == 'W') {
		return hasPathFromCurrentCell(matrix, n, path + 1, x, y - 1);
	}

	if (path[0] == 'E') {
		return hasPathFromCurrentCell(matrix, n, path + 1, x, y + 1);
	}

	if (path[0] == 'N') {
		return hasPathFromCurrentCell(matrix, n, path + 1, x - 1, y);
	}

	if (path[0] == 'S') {
		return hasPathFromCurrentCell(matrix, n, path + 1, x + 1, y);
	}
}

bool hasPath(bool** matrix, int n, const char* path) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (hasPathFromCurrentCell(matrix, n, path, i, j)) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	bool** matrix = new bool* [3];
	for (int i = 0; i < 3; i++) {
		matrix[i] = new bool[3];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matrix[i][j];
		}
	}
	cout << endl;

	const char* existingPath = "SEES";
	cout << hasPath(matrix, 3, existingPath) << endl;

	const char* nonExistingPath = "ESN";
	cout << hasPath(matrix, 3, nonExistingPath) << endl;
	return 0;
}