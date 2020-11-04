#include <iostream>

using namespace std;

int main()
{

    int day, month;
    cin >> day >> month;

    switch (month)
    {
    case 1:
    {
        (day <= 19) ? cout << "Capricorn" << endl : cout << "Aquarius" << endl;
    };
    break;
    case 2:
    {
        (day <= 18) ? cout << "Aquarius" << endl : cout << "Pisces" << endl;
    };
    break;
    case 3:
    {
        (day <= 19) ? cout << "Pisces" << endl : cout << "Aries" << endl;
    };
    break;
    case 4:
    {
        (day <= 19) ? cout << "Aries" << endl : cout << "Taurus" << endl;
    };
    break;
    case 5:
    {
        (day <= 20) ? cout << "Taurus" << endl : cout << "Gemini" << endl;
    };
    break;
    case 6:
    {
        (day <= 20) ? cout << "Gemini" << endl : cout << "Cancer" << endl;
    };
    break;
    case 7:
    {
        (day <= 22) ? cout << "Cancer" << endl : cout << "Leo" << endl;
    };
    break;
    case 8:
    {
        (day <= 22) ? cout << "Leo" << endl : cout << "Virgo" << endl;
    };
    break;
    case 9:
    {
        (day <= 22) ? cout << "Virgo" << endl : cout << "Libra" << endl;
    };
    break;
    case 10:
    {
        (day <= 22) ? cout << "Libra" << endl : cout << "Scorpio" << endl;
    };
    break;
    case 11:
    {
        (day <= 21) ? cout << "Scorpio" << endl : cout << "Sagittarius" << endl;
    };
    break;
    case 12:
    {
        (day <= 21) ? cout << "Sagittarius" << endl : cout << "Capricorn" << endl;
    };
    break;
    default:
        cout << "Wrong input!\n";
    }

    return 0;
}
