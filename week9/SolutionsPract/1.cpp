#include <iostream>

using namespace std;

int main() {
	int a[100];
	int b[100];
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	if (n > m) {
		cout << "zero times!";
		return 1;
	} else {
		int count = 0;
		for (int i = 0; i < m; i++) {
			int start = i;
			bool isContained = true;
			for (int j = 0; j < n; j++) {
				if (b[start] != a[j]) {
					isContained = false;
					break;
				}
				else {
					start++;
				}
			}
			if (isContained) {
				count++;
			}
		}
		cout << count;
	}
	return 0;
}