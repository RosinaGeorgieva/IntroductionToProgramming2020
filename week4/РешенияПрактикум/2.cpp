#include <iostream>

using namespace std;

int main() {
	//compile to see the answer
	//a)
	enum test {A = 32, B, C}; //това не са char! Това са константи на enum-a, 
	cout << A << B << C << endl; // чиито имена се състоят от една буква;

	//б)
	enum Color {  GREEN, BLUE, RED, WHITE, YELLOW, PINK };
	cout << GREEN << BLUE << RED << WHITE << YELLOW << PINK;
	return 0;
}