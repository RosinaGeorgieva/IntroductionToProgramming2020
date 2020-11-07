#include <iostream>

using namespace std;

int main()
{
	int k, n;
	int power = 1;
	cin >> k >> n;
	//как работи цикълът? : за k = 2, n = 6:
	//i == 0 < 6 -> power = power * 2 и от р.8 => power = 1 * 2 == 2; i++;
	//i == 1 < 6 -> power = power * 2  => power = 2 * 2 == 4; i++;
	//i == 2 < 6 -> power = power * 2  => power = 4 * 2 == 8; i++;
	//i == 3 < 6 -> power = power * 2  => power = 8 * 2 == 16; i++;
	//i == 4 < 6 -> power = power * 2  => power = 16 * 2 == 32; i++;
	//i == 5 < 6 -> power = power * 2  => power = 32 * 2 == 64; i++;
	//i == 6 не е по-малко от 6 => не влиза в цикъла => power си остава 64 и го извеждаме на р.21;
	for (int i = 0; i < n; i++) { // екв. на for (int i = 1; i <= n; i++)
		power = power * k;
	}
	cout << power;
	return 0;
}