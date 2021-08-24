// -----------------------------------------------------------------------------------------------
// lab6ex1

#include <iostream>
using namespace std;

// function 1
void drawline();


// main function 
int main()
{
    drawline();
    return 0;
}

// function 1
void drawline()
{
    int i,j;
    for (i = 1; i <=5; i++)
    {
        for (j=1; j <= 10; j++)
            cout << "* " ;
    cout << "\n";
    }
    
//     return 0;
}

// ---------------------------------------------------------------------------------

// lab6ex2

#include <iostream>
using namespace std;
// function 1
void drawline(int rows)
{
    int i, j ;
    
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            cout << "* ";
        } 
        cout << "\n";
    }
}

// main function
int main()
{
    drawline(3);
    return 0;
}




// ---------------------------------------------------------------------------------------------------


// lab6ex3

#include <iostream>
using namespace std;

// function 1 decleration
void drawline(int rows, int columns);

// main function
int main()
{
    int rows, columns;
    
    cout << "Enter the rows and columns you need : ";
    cin >> rows >> columns;
    
    drawline(rows, columns);
    return 0;
}

// function 1 
void drawline(int rows, int columns)
{
    int i, j ;
    
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        {
            cout << "* ";
        } 
        cout << "\n";
    }
}



// ---------------------------------------------------------------------------------------------------


// lab6ex4

//An Example of pass by value parameter passing  
 
#include <iostream> 
using namespace std; 
//  decleration of circleArea
float circleArea(float radius);
// decleration of rectangleArea
float rectangleArea(float length, float width);


// main function
int main() 
{ 
    float radius, length, width, cArea = 0, rArea = 0; 
 
    cout <<"Enter the value of radius :"; 
    cin >> radius; 
    
    cout << "Enter the value of length : ";
    cin >> length;
    
    cout << "Enter the value of the width : ";
    cin >> width ;
    
    cArea = circleArea(radius);
    rArea = rectangleArea(length, width);
 
    cout <<"Area of circle is "<< cArea << endl; 
    cout <<  "Area of the rectangle is " << rArea ;
 
    return 0; 
 
}

// circleArea named function
float circleArea(float radius)
{
    float cArea =  3.14 * radius * radius;
    return cArea;
}


// rectangleArea named function
float rectangleArea(float length, float width)
{
    float rArea = length * width;
    return rArea;
}



// ------------------------------------------------------------------------------------------------------


// lab6ex5

#include <iostream>
using namespace std;


// celsius function
float celsius(float fahrenheit)
{
    float c = (fahrenheit - 32) * ( 5 / 9.0);
    return c;
}

// fahtenheite function
float fahrenheit(float celsius)
{
    float f = (celsius * 9/5.0) + 32;
    return f;
}


// tabuler format function - the chart
float chart(float a, float b)
{
    for (a = 0; a <= 100; a++)
    {
        b = (a * 9/5.0) + 32;
        cout << "\n" << a << " C = " << b << " F\n" ;
        
    }
}

// main function
int main()
{
    float cel, fah, f , c ;
    
    cout << "Enter fahrenheit for convert to celsius : ";
    cin >> fah;
    
    cout << "Enter celsius for convert to fahrenheit : ";
    cin >> cel;
    
    c = celsius(fah);
    f = fahrenheit(cel);
//     print of celsius function
    cout << fah << " F = " << c << " C\n";
//     print of fahrenheit function
    cout << cel<< " C = " << f << " F\n";
    
//     function for the tabuler format
    chart(cel, fah);
    return 0;
}

