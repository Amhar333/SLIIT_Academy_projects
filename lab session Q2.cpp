#include <iostream>
#include <cmath>
using namespace std;

// int main()
// {
//     double r, u;
//     cout << "What is the radius >";
//     cin >> r;
//     u = 3.14 * (r * r);
//     cout << "The area of a circle of radius " << r <<" unit is " << u << " units." ;
//     return 0;
// }

int main()
{
    double r, u;
    cout << "What is the radius >";
    cin >> r;
    u = 3.14 * pow(r, 2.0);
    cout << "The area of a circle of radius " << r <<" unit is " << u << " units." ;
    return 0;
}
