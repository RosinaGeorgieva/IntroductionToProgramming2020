#include <iostream>

using namespace std;

int main() {
	//компилирайте, за да получите отговора на задачата:
	int first_number = 7, second_number = 15; // first_number = 0111, second_number = 1111
	cout << "first_number AND second_number = " << (first_number & second_number) << endl; // 0111 & 1111 == 0111 == 7
	cout << "first_number OR second_number = " << (first_number | second_number) << endl; // 0111 | 1111 == 1111 == 15
	cout << "first_number XOR second_number = " << (first_number ^ second_number) << endl; // 0111 XOR 1111 = 1000 == 8
	cout << "first_number >> 1 = " << (first_number >> 1) << endl; // 0111 >> 1 == 0011 == 3
	cout << "first_number << 1 = " << (first_number << 1) << endl; // 0111 << 1 == 1110 == 14
	return 0;
}