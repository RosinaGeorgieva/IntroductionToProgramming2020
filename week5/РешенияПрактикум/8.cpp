#include <iostream>

using namespace std;

int main() {
	int p, q;
	cin >> p >> q;
	for (int i = p; i <= q; i++) {
		for (int j = i + 1; j <= q; j++) {
			if (i + 4 == j && i % 2 == 0 && j % 2 == 0) {
				cout << i << " " << j << endl;
			}
		}
	}
	system("pause"); //примитъвът, който спира изпълнението на програмата, за който ви говорех предишната седмица
}

