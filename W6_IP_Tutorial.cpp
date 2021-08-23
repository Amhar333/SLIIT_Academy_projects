// By: thecodemonster(Amhr)
#include <iostream>
using namespace std;

// pass by reference

void ChangeR(int &number)
{
    number = number * 100 ;
}

// pass by value

void ChangeV(int number)
{
    num = number * 100 ;
}


int main()
{
    int number;
    cout << "Enter number : ";
    cin >> number;
    ChangeV(number) ;
    ChangeR(number) ;
    cout << "\nThe number is " << number ;
    return 0;
}
