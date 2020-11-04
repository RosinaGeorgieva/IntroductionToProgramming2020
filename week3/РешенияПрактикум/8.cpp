#include <iostream>

using namespace std;

int main() {
	char symbol;
	cin >> symbol;
	
	//!!! вж. (*)
	if (symbol < 65 || (symbol > 90 && symbol < 97) || symbol > 122) {
		cout << (int)symbol << "Symbol is not a letter." << endl;
	} else {
		switch (symbol) {
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'Y':
		case 'y':
		case 'U':
		case 'u': 
			 cout << "The letter is a vowel.";
			 break;
		default: cout << "The letter is a consonant.";
		}
	}
	//(*) Ако пропуснем операторите за някой кейс,
	//неговите оператори автоматично стават като тези на следващия кейс,
	//който има дефинирани оператори =>
	//синтаксисът горе е еквивалентен на:
	/*switch (symbol) {
	case 'A':
		cout << "The letter is a vowel.";
		break;
	case 'a':
		cout << "The letter is a vowel.";
		break;
	case 'E':
		cout << "The letter is a vowel.";
		break;
	case 'e':
		cout << "The letter is a vowel.";
		break;
	case 'I':
		cout << "The letter is a vowel.";
		break;
	case 'i':
		cout << "The letter is a vowel.";
		break;
	case 'O':
		cout << "The letter is a vowel.";
		break;
	case 'o':
		cout << "The letter is a vowel.";
		break;
	case 'Y':
		cout << "The letter is a vowel.";
		break;
	case 'y':
		cout << "The letter is a vowel.";
		break;
	case 'U':
		cout << "The letter is a vowel.";
		break;
	case 'u':
		cout << "The letter is a vowel.";
		break;
	default: cout << "The letter is a consonant.";
	}*/
	return 0;
}