#include <iostream>

using namespace std;

int main() {
	//компилирайте, за да получите отговора на задачата:
	//a)
	int time = 20;
	cout << ((time < 18) ? "Good day." : "Good evening.");

	//б)
	int x;
	cin >> x; // въвеждаме 4
	int five_divided_by_x = (x != 0 ? 5 / x : 0);
	cout << five_divided_by_x;
	//обяснение по изхода: тъй като условието е Т,
	//резултатът от тернарния оператор е 5 / х;
	//тъй като присвояваме този резултат на променливата
	//five_divided_by_x, която е от тип int,
	//резултатът ще се преобразува до тип int,
	//т.е. ще получим (int)(5/4) == 1;
	return 0;
}