#include <iostream>

using namespace std;

int main()
{
	//тъй като константите на enum-a са крайно множество,
	//ако не е влязло в първите 4 case-a, е останала само една държава - Италия. 
	//Затова, в случая дали ще напишем default : cout << "Rome"; или както е на р.25,
	//е едно и също.
	enum Country { FRANCE, UNITED_KINGDOM, AUSTRIA, GERMANY, ITALY };
	Country country = UNITED_KINGDOM;
	switch (country) {
	case FRANCE:
		cout << "Paris";
		break;
	case UNITED_KINGDOM:
		cout << "London";
		break;
	case AUSTRIA:
		cout << "Vienna";
		break;
	case GERMANY:
		cout << "Berlin";
		break;
	case ITALY:
		cout << "Rome";
	}
	return 0;
}