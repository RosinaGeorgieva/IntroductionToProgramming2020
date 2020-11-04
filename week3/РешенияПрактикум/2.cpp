#include <iostream>

using namespace std;

int main() {
	double x, y;
	cin >> x >> y;
	
	//a)
	if (x >= -1 && x <= 1 && y >= -1 && y <= 1) { // еквивалентно: abs(x) <= 1 && abs(y) <= 1
		cout << "Point is inside the figure."; 
	} else {
		cout << "Point is outside the figure.";
	}

	//б)
	if (x >= 1 && x <= 2 && y >= 1 && y <= 2) {
		cout << "Point is inside the figure.";
	} else {
		cout << "Point is outside the figure.";
	}

	//в)
	//полукръг с център (0,0) и радиус 2, разположен над абсцисата:
	bool is_inside_big_black_semicircle = x * x + y * y <= 4 && y >= 0;
	//полукръг с център (-1,0) и радиус 1 (частта над абсцисата се включва в големия кръг):
	bool is_inside_little_black_semicircle = (x + 1) * (x + 1) + y * y <= 1;
	//кръг с център (1,0) и радиус 1, без да се включва контурът;
	//контурът не искаме да се включва, защото в задачата ни е позволено да се намираме в/у него:
	bool is_inside_little_white_semicircle = (x - 1) * (x - 1) + y * y < 1;
	if ((is_inside_big_black_semicircle || is_inside_little_black_semicircle) && !is_inside_little_white_semicircle) {
		cout << "Point is inside the figure.";
	} else {
		cout << "Point is outside the figure.";
	}
	return 0;
}