#include <iostream>
using namespace std;

int main()
{
    int upRightX, upRightY, downLeftX, downLeftY;
    cin >> upRightX >> upRightY >> downLeftX >> downLeftY;
    int x, y;
    cin >> x >> y;
    if (x <= upRightX && x >= downLeftX && y >= downLeftY && y <= upRightY)
    {
        cout << "Inside\n";
    }
    else
    {
        cout << "Not inside\n"; //hehe
    }

    return 0;
}