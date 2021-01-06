#include <iostream>

using namespace std;

void removeElement(int* arr, int n, int k) {
    int* newarr = new int[n - 1];
    for (int i = 0; i < k; i++) {
        newarr[i] = arr[i];
    }
    for (int i = k; i < n - 1; i++) {
        newarr[i] = arr[i + 1];
    }
    delete[] arr;
    arr = new int[n - 1];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = newarr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i];
    }
}

void removeColumn(int** matrix, int n, int m, int k) {
    for (int i = 0; i < n; i++) {
        removeElement(matrix[i], m, k);
    }
}

void print(int** matrix, int n, int m) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int CONST_SIZE_FOR_TODAY = 5;

    int* dynamicNumber = new int; 

    *dynamicNumber = CONST_SIZE_FOR_TODAY; 

    int** dynamicMatrix = new int* [CONST_SIZE_FOR_TODAY];
    for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++) {
        dynamicMatrix[i] = new int[CONST_SIZE_FOR_TODAY];
    }

    for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++) {
        for (size_t j = 0; j < CONST_SIZE_FOR_TODAY; j++) {
            cin >> dynamicMatrix[i][j];
        }
    }

    removeElement(dynamicMatrix[1], 5, 3);
    for (int i = 0; i < 4; i++) {
        cout << dynamicMatrix[1][i];
    }
    removeColumn(dynamicMatrix, 5, 5, 3);
    print(dynamicMatrix, CONST_SIZE_FOR_TODAY, CONST_SIZE_FOR_TODAY - 1);
	return 0;
}