#include <iostream>

using namespace std;

void cat(char to[], char from[]) {
	int size = strlen(to);
	for (int i = 0; i < size; i++) {
		to[size + i] = from[i];
	}
}

int main() {
	char to[7] = "abc";
	char from[5] = "abc";
	cat(to, from);
	cout << to;
	return 0;
}