// ------------------------------------(i)-----------------------------------------------------------
// by thecodemonster

#include <iostream>
#include <cmath>
using namespace std;

// main function
int main()
{
    int i, num = 0;
    for (i =1; num < 14641; i++)
    {
        num = pow(11, i);
        cout << num <<endl;
        
    }
    return 0;
} 
// main function


// ------------------------------------(ii)-----------------------------------------------------------
// by thecodemonster

#include <iostream>
using namespace std;

// main function
int main()
{
    int i;
    for (i = 25 ; i >= -5; i = i-5)
    {
        cout << i <<endl;
    }
    return 0;
} 
// main function


// ------------------------------------(iii)-----------------------------------------------------------

// by thecodemonster

#include <iostream>
using namespace std;

// main function
int main()
{
    int i = 21, sub;
    for (sub = 6; sub >= 0;sub--  )
    {
        cout << i <<endl;
        i = i - sub;
    }
    return 0;
} 
// main function
