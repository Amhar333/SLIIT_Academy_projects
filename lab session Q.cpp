#include <iostream>
#include <cmath>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    double c, a, b, A, T, p, q, r;
    
    cout << "What is the legnth of A >";
    cin >> a;
    
    cout << "What is the legnth of B >";
    cin >> b;
    
    cout << "What is the angle in degrees >";
    cin >> A;
    
    T = (A  * 3.14 / 180);
    
    p = pow(a,2.0);
    
    q = pow(b, 2.0);
    
    r = (2*a*b)*cos(T);
    
    c = sqrt(p + q - r);
    
    cout << "legnth of C =" << c;
    return 0;
}
