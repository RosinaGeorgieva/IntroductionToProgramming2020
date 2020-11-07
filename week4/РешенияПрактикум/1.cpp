#include <iostream>

using namespace std;

int main() {
	//compile to see the answer
	enum Color {RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET};
	Color shirt, pants;
	shirt = RED;
	pants = BLUE;
	cout << shirt << " " << pants << endl;
	return 0;
}