#include <iostream>

using namespace std;

int main()
{

    int a, b;
    char sign;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Input operation:";
    cin >> sign;

    switch (sign)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        if (b == 0)
            cout << "Error! Division by 0!\n";
        else
            cout << a / b << endl;
        break;
    case '%':
        if (b == 0)
            cout << "Error! Division by 0!\n";
        else
            cout << a % b << endl;
        break;
    default:
        cout << "Wrong input!\n";
    }

    return 0;
}
