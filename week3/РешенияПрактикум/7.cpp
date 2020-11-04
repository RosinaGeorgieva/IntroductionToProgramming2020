#include <iostream>

using namespace std;

int main() {
	//a)
	//Оценява се num + 2 => 7;
	//влиза само в default case, т.к. нито един от другите не обхваща тази ст-ст;
	int num = 5;
	switch (num + 2) {
	case 1: 
		cout << "Case 1 : Value is: " << num << endl;
	case 2: 
		cout << "Case 2 : Value is: " << num << endl;
	case 3: 
		cout << "Case 3 : Value is: " << num << endl;
	default: 
		cout << "Default : Value is: " << num << endl;
	}

	//б)
	//Оценява се i => 2;
	//не влиза в case 1; влиза в case 2; извършва операторите; има break
	//=> изпълнението на switch-a приключва;
	int i = 2;
	switch (i) {
	case 1: 
		cout << "Case 1." << endl;
		break;
	case 2:
		cout << "Case 2." << endl;
		break;
	case 3:
		cout << "Case 3." << endl;
		break;
	case 4:
		cout << "Case 4." << endl;
		break;
	default:
		cout << "Default." << endl;
		break;
	}

	//в)
	//Оценява се ст-тта на j => 2;
	//не влиза в 1; влиза в 2 => изпълняват се операторите;
	//извежда се р.51; изпълнява се р.57;
	//изпълнението на switch-a приключва, т.к. има break на р.58
	//(въпреки че j == 3 и следващият случай е за j == 3).
	int j = 2;
	switch (j) {
	case 1:
		cout << "Case 1." << endl;
		j--;
		break;
	case 2:
		cout << "Case 2." << endl;
		j++;
		break;
	case 3:
		cout << "Case 3." << endl;
		break;
	case 4:
		cout << "Case 4." << endl;
		break;
	default:
		cout << "Default." << endl;
		break;
	}

	//г)
	//влиза в case 1, изпълнява оператора (т.е. counter става 2),
	//тъй като няма break, изпълнява всички оператори от следващите
	//кейсове, докато не срещне брейк;
	//от р. 81 counter става 7, от р. 82 counter става 8 => рез. е 8.
	int value = 1;
	int counter = 1;
	switch (value) {
	case 2: counter += 2;
	case 1: counter++;
	case 3: counter += 5; 
	default: counter++;
	}
	cout << counter;
	return 0;
}