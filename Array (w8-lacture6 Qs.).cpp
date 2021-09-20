// -----------------------------Question 1 / 01 ----------------------------------
#include <iostream>
using namespace std;

int main()
{
	//int fnum[10];
	float fnum[10];
	cout << "Enter float numbers: \n";
	for (int i = 0; i < 10;i++)
	{
		cin >> fnum[i];
		
	}
	cout << "The floats in array are > ";
	for (int i = 0; i < 10; i++)
	{
		cout << fnum[i]<< ", ";
		
	}	
}

// -----------------------------Question 1 / 02 ----------------------------------


#include <iostream>
using namespace std;


int main()
{
	int sk;
	int a[10]; //= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << "Enter 10 numbers: \n"; 
	for (int i = 0; i <10; i++)
	{
		cin >> a[i];
	}
	cout << "Numbers in array > ";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ", ";

	}
	cout << endl;
	cout << "Search key: ";
	cin >> sk;
	for (int i = 0; i < 10 ; i++)
	{
		if (sk == a[i])
		{
			cout << "This number is present in array\n";
		}
	}
}


// -----------------------------Question 1 / 03 ----------------------------------


// by thecodemonster

#include <iostream>
#include <cmath>
// #include <chrono>  // for high_resolution_clock
using namespace std;

// main function
int main()
{
    int a[10];
    int pnum = 0, nnum = 0, onum = 0, mnum = 0;
    cout << "Enter 10 numbers: \n";
    for (int i = 0; i < 10 ; i++ )
    {
        cin >> a[i]; 
    }
    for (int i = 0; i < 10 ; i++)
    {
        	     if (a[i] > 0)
	    {
		    pnum = pnum + 1;
	    }
	    if (a[i] < 0)
	    {
		    nnum = nnum + 1;
	    }
	    if (a[i] % 2 == 0)
	    {
		    mnum = mnum + 1;
	    }
	    if (a[i] % 2 != 0)
	    {
		    onum = onum + 1;
	    }
}
cout <<"Number of positive numbers > " << pnum << endl;
cout <<"Number of negative numbers > "<< nnum << endl;
cout <<"Number of even numbers > " << mnum << endl;
cout <<"Number of odd numbers > " << onum << endl;
    return 0;
} 
// main function


// -----------------------------Question 1 / 04 ----------------------------------


#include <iostream>
using namespace std;

int printn(int a) // print int function
{

cout << a;
return a;

}

string prints(string a) // print string function
{
cout << a;
return a;
}

int main()
{

int numbers[10];

for (int i = 0 ; i < 10; i++)
{
cout << "Enter number > ";
cin >> numbers[i];
}

int temp[10];

for (int i = 9; i >= 0; i--)
{
for (int j = 0;  j < 10 ; j++)
{
if ( i + j == 9)
{
temp[j] = numbers[i];
}
}
}

cout << endl;

prints("Output: ");

// this is the printing for loop

for (int p = 0; p < 10 ; p++)
{
cout << temp[p] << ", ";
}

prints("\n\nby : thecodemonster || IT");
printn(21730160);
prints("\n");
return 0;
}



// -----------------------------Question 1 / 05 ----------------------------------


#include <iostream>
using namespace std;

string ps(string a)
{
cout << a;
return a;
}
int main()
{

char a[7];
int count = 0;
cout  << "Enter 7 charecters: \n";
for (int i = 0; i < 7; i++)
{

cout  << "Enter a charecter > ";
cin >> a[i];

}

for (int i = 0; i < 7; i++)
{

if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I'|| a[i] == 'O' || a[i] == 'U')
{

count += 1;

}
}
cout << "\nOutput: "<< count << " Vowels\n";
ps("\nBy: thecodemonster || IT21730160\n");
}



//-------------------------------------------Question 2-------------------------------------------------
// by thecodemonster

#include <iostream>
using namespace std;

// main function
int main()
{

    int marks[5];
    char student[5];
    int j=4;

    cout << "Enter marks of 5 students: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << ">";
        cin >> marks[i];
//        for (char a = 'A'; a <= ('E' - j); a++)
//        {
            
//            student[a] = marks[i];
 //           j--;
 //       }

    }


// total
    int total=0;
    for (int i = 0;i < 5;i++)
    {

    total = total + marks[i];

    }

// printing total

    cout << "Total marks =  "<< total << endl;

//finding  highest
    for(int i = 1;i < 5; i++)
        {
       // Change < to > if you want to find the smallest element
            if(marks[0] < marks[i])
            {
                marks[0] = marks[i]; 
            }
        }
    cout << "Highest marks = " << marks[0]<< endl;

// finding minimum 
    for (int i = 1; i<5; i++)
    {

        if (marks[0] > marks[i])
	    {
            marks[0] = marks[i];
        }

    }
    cout << "Minimum marks = " << marks[0] << endl;

// this forloop use for assigning the value to marks array and student name array

    for (int i  = 0; i < 5 ; i++)
   {

        for (char a = 'A'; a <= 'E'; a++)
        {
//	if (a + j == 69){
		a = marks[i];
		student[i] = a;
		cout << a << endl;
//		j--;
//	}
        }
    }
// finding student name who gets the highest marks
    for (int i  = 1; i < 5 ; i++)
    {

        for (char a = 'A'; a <= 'E'; a++)
        {
            if(marks[0] < marks[i])
            {
                marks[0] = marks[i];
                student[0] = marks[0];
            }
        }
    }

    cout << "\nStudent " << student[0] << " has taken the highest marks for mathematics. ";


    return 0;
} 
// main function
