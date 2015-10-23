#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

//int inputAndAverage5();
//int Average5(int theArray[],int arrayTotal)
int AverageN(int theArray[], int arrayTotal, int arraySize);


int main()
{

	//int printOut = inputAndAverage5();
	//cout << "The average for the numbers entered is " << printOut << endl; 
	
	/*int theArray[5];
	int arrayTotal = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter number " << (i + 1) << " that you wish to average." << endl;
		cin >> theArray[i];
		arrayTotal = arrayTotal + theArray[i];
	}
	
	 
	 int printOut = Average5(theArray, arrayTotal);
	 cout << "The average for the numbers entered is " << printOut << endl;

	*/
	int size;
	cout << "How many numbers do you wish to enter?" << endl;
	cin >> size;
	
	int *theArray = new int[size];
	int arrayTotal = 0;

	for (int i = 0; i < size; i++)
	{
	cout << "Please enter number " << (i + 1) << " that you wish to average." << endl;
	cin >> theArray[i];
	arrayTotal = arrayTotal + theArray[i];
	}

	int printOut = AverageN(theArray, arrayTotal,size);
	
	cout << "The average for the numbers entered is " << printOut << endl;


	system("PAUSE");
	return 0;

	
}

/*int inputAndAverage5()
{
	/int theArray[5];
	int total = 0;
	int average = 0;
	for (int x = 0; x < 5; x++)
	{
		cout << "Please enter number " << (x + 1) << endl;
		cin >> theArray[x];
		total = total + theArray[x];
		average = total / 5;

	}
	return average;

}*/

/*int Average5(int theArray[], int arrayTotal)
{
	
	int total = 0;
	int average = 0;
	
	average = arrayTotal / 5;
		
	return average;
}*/

int AverageN(int theArray[], int arrayTotal, int size)
{
	int total = 0;
	int average = 0;

	average = arrayTotal / size;

	return average;
}