#include <iostream>

using namespace std;

bool isDigit(char c) {
	return c >= '0' && c <= '9';
}

bool isLeadingSign(char c) {
	return c == '-' || c == '+';
}

bool isNumber(char* arr, int n) {
	for (int i = 0; i < n; i++) {
		if (!isDigit(arr[i]) && !isLeadingSign(arr[i])) {
			return false;
		}
	}
	return true;
}

void writeToAnotherArr(const char* str, int n, int* result, int& m) {
	int indexInResult = 0;
	for (int i = 0; i < n; i++) {
		if (isDigit(str[i]) || isLeadingSign(str[i])) {
			int index = 0;
			char* helper = new char[strlen(str) + 1];
			while (isDigit(str[i]) || isLeadingSign(str[i])) {
				helper[index] = str[i];
				index++;
				i++;
			}
			helper[index] = '\0';
			result[indexInResult++] = atoi(helper);
		}
	}
	m = indexInResult;
}

int main() {
	const char* str = "В 9 ч.тръгвам към ФМИ с автобус -94 или 120.";
	int n = strlen(str);
	int m;
	int* result = new int[strlen(str)/2];

	writeToAnotherArr(str, n, result, m);

	for (int i = 0; i < m; i++) {
		cout << result[i] << " ";
	}
	
	return 0;
}