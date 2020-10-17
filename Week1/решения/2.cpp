#include <iostream>
#include <iomanip> //*

using namespace std;

int main() {
	int first_number;
	int second_number;

	cin >> first_number >> second_number;

	//математически функции - стр. 6 от теорията
	cout << "сума: " << first_number + second_number << endl;
	cout << "абс. стойност: "<< abs(first_number - second_number) << endl;
	cout << "остатък: " << first_number % second_number << endl;
	cout << "цяла част: " << first_number / second_number << endl;

	//за да може операторът "/" (за деление) да смята не целочислено деление, а това, с което сме свикнали,
	//е необходимо поне един (а може и двата) от операндите да бъде нецелочислен, т.е. double;
	//затова ни се налага преобразуване на поне единия операнд; трите начина отдолу връщат един и същи резултат
	//с разлика в това коя от двете променливи преобразуваме от int към double;
	cout << "частно: " << (double)first_number / second_number << endl;
	/*cout << "частно: " << a / (double)b << endl; 
	cout << "частно: " << (double)a / (double)b << endl;*/

	cout << "долна скоба: " << floor(first_number / second_number) << endl;
	cout << "горна скоба: " << ceil((double)first_number / (double)second_number) << endl;
	cout << "степенуване: " << pow(first_number, sqrt(second_number)) << endl;

	//функцията setprecision(int number_of_digits) ни дава извеждане на искания брой цифри след десетината запетая;
	//за да можем да я използваме, ни е необходим хедъра <iomanip>, т.е. вж. *; вж. зад. 17
	cout << "логаритмуване: "<< setprecision(5) << log(floor(first_number/second_number)) / log(2);
	return 0;
}