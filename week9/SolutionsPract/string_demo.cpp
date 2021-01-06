#include <iostream>

using namespace std;

int main() {
	char from[10];
	cin.getline(from, 10); //defghi
	cout << strlen(from) << endl; //6

	char to[10];
	cin.getline(to, 10); //abc
	cout << to << endl; //abc

	strcpy_s(to, from);
	cout << to << endl; //defghi

	strncpy_s(to, from, 3);
	cout << to << endl; //def

	cout << strcmp(to, from) << endl; //-1

	strcat_s(to, from); //defdefghi
	cout << to << endl;

	cout << from << endl;
	strncat_s(to, 10, from, 3);  //exception; "the behavior is undefined if the size of the character array pointed to by src < strnlen(src,count) < destsz"
	cout << to;
	return 0;
}