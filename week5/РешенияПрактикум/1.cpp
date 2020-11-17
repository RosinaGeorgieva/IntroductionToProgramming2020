#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << i * 4 + 17 * i - 102 << endl;
	}

	//(...(((11Х + 10)Х + 9)Х + 8)Х + ... + 2)Х + 1
	int y = 11;
	int x;
	cin >> x;
	for (int i = 10; i >= 1; i--) {
		y = y * x + i;
	}

	//дадено е цяло n: 1 - 1/2 + 1/3 - 1/4 + ... + (-1)^(n-1)*1/n
	int m;
	cin >> m;
	int s = 0;
	int k = 1;
	for (int i = 1; i <= m; i++) {
		s = s + k / double(i);
		k = -k;
	}
	return 0;
}