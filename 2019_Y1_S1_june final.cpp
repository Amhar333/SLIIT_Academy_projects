// by M.Amhar (thecodemonster)
#include "iostream"
#include "iomanip"
using namespace std;

// inputproduction function
// this function should ask to the user to insert production of each machine and fill array.
void inputProduction(float production[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Production for Day " << i+1 << " = ";
		cin >> production[i];
	}
}

// minimum function 
// this function should return the machine that has the lowest production
char minimumMachine(float x1, float x2, float x3)
{
	char min_production_machine_name;

	if (x1 < x2 && x1 < x3)
	{
		min_production_machine_name = 'A';
	}
	else if (x2 < x1 && x2 < x3)
	{
		min_production_machine_name = 'B';
	}
	else if (x3 < x2 && x3 < x1)
	{
		min_production_machine_name = 'C';
	}
	return min_production_machine_name;
}

// maximum function 
// this function should return the name of the machine that has the highest production
// we want to find what machine's production is maximum on that day
char maximumMachine(float x1, float x2, float x3)
{
	char max_production_machine_name;

	for (int i = 0; i < 4; i++)
	{
		if (x1 > x2 && x1 > x3)
		{
			max_production_machine_name = 'A';
		}
		else if (x2 > x1 && x2 > x3)
		{
			max_production_machine_name = 'B';
		}
		else if (x3 > x1 && x3 > x2)
		{
			max_production_machine_name = 'C';
		}
	}
	return max_production_machine_name;
}


// average of the production function
// this functions should return the average of the three machines on that day
// so there have 4 average production for each days (we can use a for loop)
float averageProduction(float x1, float x2, float x3)
{
	return ((x1 + x2 + x3) / 3);
} 

// total of the production function
// this function should return the total of the production on that day
// so in main funcition we want to call for 4 days with for loop
float totalProduction(float x1, float x2, float x3)
{
	return (x1 + x2 + x3);
}


// getProduction function
// this function should return the production of that day
// this function have 2 parameters as input one for production of that day and next for define the day
// so, we want to call this function 1 time in printChart function
float getProduction(float a[4], int day)
{
	return a[day-1];
}

// printBar function
// this function should print the bar It depends on the production of production_of_that_day
// this finction have one parameters as input
// we want to use this function in printChart function
void printBar(float production)
{
	float num;
	num = production / 10.0;
	for (;num > 0;num--)
	{
		printf("* ") ;
	}
	cout << endl;
}


// printChart function
// this function should contain two function (printBar and getProduction functions)
// this function should print a chart for astrisks(*)
void printChart(float a[], float b[], float c[],int day)
{
	for (; day < 5; day++)
	{
		cout << "\nDay "<< day <<"\n";
		printf("Machine A : ") ;
		printBar(getProduction(a, day));

		printf("Machine B : ");
		printBar(getProduction(b, day));

		printf("Machine C : ");
		printBar(getProduction(c, day));
	}
}

// printReport function 
// this finction should print a report from all this function
// It's like a table (so i'm using setw(n) mathod for this)
void printReport(float a[], float b[], float c[], int size)
{
	cout << " Day " << setw(15) << " Machine A " << setw(15) << " Machine B " << setw(15) << " Machine C " << setw(15) << " Minimum " << setw(15) << " Maximum " << setw(15) << " Total " << setw(15) << " Average\n"; 
	for (int i = 0; i < size; i++)
	{
		cout << "  " << i+1 << setw(15) << a[i] << setw(15) << b[i] << setw(15) << c[i] << setw(15) << minimumMachine(a[i], b[i], c[i]) << setw(15) << maximumMachine(a[i], b[i], c[i]) << setw(15) << totalProduction(a[i], b[i], c[i]) << setw(15) << averageProduction(a[i], b[i], c[i]) << endl ;
	}
}

int main()
{
	float machine_A[4], machine_B[4], machine_C[4];
	int day;
	
	// answer for Qs-a
	printf("Enter production of Machine A : \n");
	inputProduction(machine_A, 4);
	cout << endl;

	printf("Enter production of Machine B : \n");
	inputProduction(machine_B, 4);
	cout << endl;

	printf("Enter production of Machine C : \n");
	inputProduction(machine_C, 4);
	cout << endl;

	// answer for Qs-b
	for (int i = 0; i < 4; i++)
	{
		cout << "The Machine that has the lowest production on the day "<< i+1 << " is " << minimumMachine(machine_A[i], machine_B[i], machine_C[i]) << endl;
	}
	cout << endl;

	// answer for Qs-c
	for (int i = 0; i < 4; i++)
	{
		cout << "The Machine that has the highest production on the day "<< i+1 << " is " << maximumMachine(machine_A[i], machine_B[i], machine_C[i]) << endl;
	}
	cout << endl;

	// answer for Qs-d
	for (int i = 0; i < 4; i++)
	{
		cout << "The average of the machine production on day " << i+1 << " is " << averageProduction(machine_A[i], machine_B[i], machine_C[i])<< endl;
	}
	cout << endl;

	// answer for Qs-e
	for (int i = 0; i < 4; i++)
	{
		cout << "The total of the machine production on day " << i+1 << " is " << totalProduction(machine_A[i], machine_B[i], machine_C[i])<< endl;
	}
	cout << endl;


	// answer for Qs-h
	// in this part contain 
	// answer for Qs-f, Qs-g
	printChart(machine_A, machine_B, machine_C, 1);
	cout << endl;

	// answer for Qs-i
	printReport(machine_A, machine_B, machine_C, 4);

	// الحمد لله
	// All praises due to god for who gave me knowledge
	return EXIT_SUCCESS;
}
