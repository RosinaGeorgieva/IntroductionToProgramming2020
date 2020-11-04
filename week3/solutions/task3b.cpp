#include <iostream>

using namespace std;

int main()
{

    enum Sign
    {
        Capricorn = 1,
        Aquarius,
        Pisces,
        Aries,
        Taurus,
        Gemini,
        Cancer,
        Leo,
        Virgo,
        Libra,
        Scorpio,
        Sagittarius
    };
    int input;
    cin >> input;
    switch (input)
    {
    case Capricorn:
        cout << "Dec 22 - Jan 19" << endl;
        break;
    case Aquarius:
        cout << "Jan 20 - Feb 18" << endl;
        break;
    case Pisces:
        cout << "Feb 19 - Mar 20" << endl;
        break;
    case Aries:
        cout << "Mar 21 - Apr 19" << endl;
        break;
    case Taurus:
        cout << "Apr 20 - May 20" << endl;
        break;
    case Gemini:
        cout << "May 21 - Jun 20" << endl;
        break;
    case Cancer:
        cout << "Jun 21 - Jul 22" << endl;
        break;
    case Leo:
        cout << "Jul 23 - Aug 22" << endl;
        break;
    case Virgo:
        cout << "Aug 23 - Sept 22" << endl;
        break;
    case Libra:
        cout << "Sept 23 - Oct 22" << endl;
        break;
    case Scorpio:
        cout << "Oct 23 - Nov 21" << endl;
        break;
    case Sagittarius:
        cout << "Nov 22 - Dec 21" << endl;
        break;
    default:
        cout << "Wrong input!" << endl;
    }

    return 0;
}
