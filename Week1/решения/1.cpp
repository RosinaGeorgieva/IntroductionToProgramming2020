#include <iostream>

using namespace std;

int main() {
	int my_age = 19;

	//&променлива взима адреса на променливата; sizeof(променлива) взима размера на променливата; вж. теория.pdf, стр. 5
	cout << my_age << ":)" << &my_age << ":)" << sizeof(my_age);
	
	return 0;
}