#include <iostream>

using namespace std;

bool isLetter(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void swap(char w1[], char w2[]) {
	char helper[1024];
	strcpy(helper, w1);
	strcpy(w1, w2);
	strcpy(w2, helper);
}

void sortWords(char words[][1024], int size) {
	int minIndex;
	for (int i = 0; i < size - 1; i++) {
		minIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (strcmp(words[minIndex], words[j]) > 0) {
				minIndex = j;
			}
		}
		swap(words[i], words[minIndex]);
	}
}

int main() {
	char str[1024];
	cin.getline(str, 1024);
	char words[512][1024];
	int lastIndexOfWords = 0;
	int size = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (isLetter(str[i])) {
			words[size][lastIndexOfWords] = str[i];
			lastIndexOfWords++;
		}
		else if (!isLetter(str[i]) && isLetter(str[i + 1])) {
			words[size][lastIndexOfWords] = '\0';
			size++;
			lastIndexOfWords = 0;
		}
	}
	sortWords(words, size);
	for (int i = 0; i < size; i++) {
		cout << words[i] << endl;
	}
	return 0;
}