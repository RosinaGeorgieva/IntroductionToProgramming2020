#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double x, y, d;
    cin >> x >> y;
    d = sqrt(x * x + y * y);
    if (d <= 1 && ((y - x >= 0 && x + y >= 0) ||
                   (y - x <= 0 && x + y <= 0)))
    {
        cout << "Point in first figure!\n";
    }

    double leftCircleD = sqrt(pow((x + 2), 2) + y * y);

    if (leftCircleD >= 1 && leftCircleD <= 2 ||
        (y >= 0 && sqrt(x * x + y * y) <= 4 &&
         sqrt(pow((x - 2), 2) + y * y) >= 2 &&
         sqrt(pow((x + 2), 2) + y * y) >= 2))
    {
        cout << "Point in second figure!\n";
    }

    return 0;
}
