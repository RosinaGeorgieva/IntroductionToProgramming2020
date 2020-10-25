#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;

	int first_digit = number / 100;
	int second_digit = number / 10 % 10;
	int third_digit = number % 10;

	//решението се опира на факта, че можем да разгледаме всички пермитации на въведеното число;
	//за всяка пермутация проверяваме дали цифрите на числото, подредени по големина, ни дават тази пермутация;
	//ако да, извеждаме пермутацията;
	//Пример: number = 546;
	//разглеждаме пермутациите: 546, 564, 456, 465, 654, 645;
	//точно в една от тях цифрите са подредени в нарастващ ред - 456;
	//извеждаме тази пермутация.
	if (first_digit <= second_digit && second_digit <= third_digit) {
		cout << number << endl;
	} else if (first_digit <= third_digit && third_digit <= second_digit) {
		cout << first_digit << third_digit << second_digit << endl;
	} else if (second_digit <= first_digit && first_digit <= third_digit) {
		cout << second_digit << first_digit << third_digit << endl;
	} else if (second_digit <= third_digit && third_digit <= first_digit) {
		cout << second_digit << third_digit << first_digit << endl;
	} else if (third_digit <= first_digit && first_digit <= second_digit) {
		cout << third_digit << first_digit << second_digit << endl;
	} else {
		cout << third_digit << second_digit << first_digit << endl;
	}
	return 0;
}