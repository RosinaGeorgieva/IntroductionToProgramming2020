#include <iostream>

using namespace std;

void sort(int arr[], int size) {
	int minIndex;
	for (int i = 0; i < size - 1; i++) {
		minIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[minIndex] > arr[j]) {
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}
}

int main() {
	//сортировка на числов масив
	int arr[10];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	return 0;
}