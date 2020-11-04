#include <iostream>

using namespace std;

int main()
{

    enum Days
    {
        Mon = 1,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat,
        Sun
    };
    enum Months
    {
        Jan = 1,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Jul,
        Aug,
        Sept,
        Oct,
        Nov,
        Dec
    };
    int n, k, m, y;
    // input validation
    do
    {
        cin >> n >> k >> m >> y;
    } while (m <= 0 || m >= 13 || k <= 0 || k >= 8);

    if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
    {
        if (n <= 0 || n >= 32)
        {
            cout << "Wrong input!\n";
        }
        else
        {
            cout << n;
            switch (k)
            {
            case Mon:
                cout << " Mon";
                break;
            case Tue:
                cout << " Tue";
                break;
            case Wed:
                cout << " Wed";
                break;
            case Thu:
                cout << " Thu";
                break;
            case Fri:
                cout << " Fri";
                break;
            case Sat:
                cout << " Sat";
                break;
            case Sun:
                cout << " Sun";
                break;
            }
            switch (m)
            {
            case Jan:
                cout << " Jan";
                break;
            case Mar:
                cout << " Mar";
                break;
            case May:
                cout << " May";
                break;
            case Jul:
                cout << " Jul";
                break;
            case Aug:
                cout << " Aug";
                break;
            case Oct:
                cout << " Oct";
                break;
            case Dec:
                cout << " Dec";
                break;
            }
            cout << " " << y << endl;
        }
    }

    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (n <= 0 || n >= 31)
        {
            cout << "Wrong input!\n";
        }
        else
        {
            cout << n;
            switch (k)
            {
            case Mon:
                cout << " Mon";
                break;
            case Tue:
                cout << " Tue";
                break;
            case Wed:
                cout << " Wed";
                break;
            case Thu:
                cout << " Thu";
                break;
            case Fri:
                cout << " Fri";
                break;
            case Sat:
                cout << " Sat";
                break;
            case Sun:
                cout << " Sun";
                break;
            }
            switch (m)
            {
            case Apr:
                cout << " Apr";
                break;
            case Jun:
                cout << " Jun";
                break;
            case Sept:
                cout << " Sept";
                break;
            case Nov:
                cout << " Nov";
                break;
            }
            cout << " " << y << endl;
        }
    }

    if (m == 2)
    {
        if (n <= 0 || n >= 30)
        {
            cout << "Wrong input!\n";
        }
        if (n == 29)
        {
            if (y % 4 == 0 || (y % 400 == 0 && y % 100 != 0))
            {
                cout << n;
                switch (k)
                {
                case Mon:
                    cout << " Mon";
                    break;
                case Tue:
                    cout << " Tue";
                    break;
                case Wed:
                    cout << " Wed";
                    break;
                case Thu:
                    cout << " Thu";
                    break;
                case Fri:
                    cout << " Fri";
                    break;
                case Sat:
                    cout << " Sat";
                    break;
                case Sun:
                    cout << " Sun";
                    break;
                }
                cout << " Feb " << y << endl;
            }
            else
            {
                cout << "Wrong input!\n";
            }
        }
        else
        {
            cout << n;
            switch (k)
            {
            case Mon:
                cout << " Mon";
                break;
            case Tue:
                cout << " Tue";
                break;
            case Wed:
                cout << " Wed";
                break;
            case Thu:
                cout << " Thu";
                break;
            case Fri:
                cout << " Fri";
                break;
            case Sat:
                cout << " Sat";
                break;
            case Sun:
                cout << " Sun";
                break;
            }
            cout << " Feb " << y << endl;
        }
    }

    return 0;
}
