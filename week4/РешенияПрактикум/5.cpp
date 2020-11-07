#include <iostream>

using namespace std;

int main()
{
	//на практика пресмятаме 6!;
	//защо инициализираме product с 1? ако го иниц. с която и да е др. ст-ст (например с 5), вместо с 1, 
	//ще намерим произведението друга_стст(5)*1*2*3*4*5*6; когато имаме произведение, инициализираме винаги с 1;
	//как работи цикълът? :
	//i == 1 <= 6 -> product = product * 1 и от р.18 => product = 1 * 1 == 1; i++;
	//i == 2 <= 6 -> product = product * 2  => product = 1 * 2 == 2; i++;
	//i == 3 <= 6 -> product = product * 3  = > product = 2 * 3 == 6; i++;
	//i == 4 <= 6 -> product = product * 4  = > product = 6 * 4 == 24; i++;
	//i == 5 <= 6 -> product = product * 5  = > product = 24 * 5 == 120; i++;
	//i == 6 <= 6 -> product = product * 6  = > product = 120 * 6 == 720; i++;
	//i == 7 > 6 => не влиза в цикъла => product си остава 720 и го извеждаме на р.22;
	int product = 1;
	for (int i = 1; i <= 6; i++) {
		product = product * i;
	}
	cout << product;
	return 0;
}