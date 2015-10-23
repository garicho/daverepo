
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;


void displayCost(double &widget, double &gadget, double &toggle);
void displayMenu();
double purchase(double &widget, double &gadget, double &toggle);
double increasePrice(double &widget, double &gadget, double &toggle);
void repeatF(char& repeat)
void writeToFile(double &widget, double &gadget, double &toggle);


int main()
{

	char repeat;
	double widget = 10;
	double gadget = 15;
	double toggle = 12;

	int choice = 0;

	do {
		displayCost(widget, gadget, toggle);
		displayMenu();

		cout << " \n What would you like to do?? (enter 1,2,3 to answer)" << endl;
		cin >> choice;

		if (choice == 1)
		{
			double printout = purchase(widget, gadget, toggle);
			cout << " The total for your purchases is " << printout;
		}
		else if (choice == 2)
		{
			increasePrice(widget, gadget, toggle);
			displayCost(widget, gadget, toggle);
		}
		else if (choice == 3)
		{
			exit(0);
		}

		repeatF(repeat);

	} while (repeat == 'Y' || repeat == 'y');

	writeToFile(widget, gadget, toggle);


	system("pause");
	return 0;
}

void  displayCost(double &widget, double &gadget, double &toggle)
{
	cout << " \n Widget: Cost " << widget << "\n\n Gadget: Cost " << gadget << " \n\n Toggle Cost: " << toggle << endl;
	
}

void displayMenu()
{
	cout << ("\n\n\ 1. purchase \n\n 2. increase a price \n\n 3. exit application") << endl;
}

double purchase(double &widget, double &gadget, double &toggle)
{

	double widgetBuys, gadgetBuys, toggleBuys = 0;
	double total = 0;

	cout << (" How many Widgets would you like to buy??") << endl;
	cin >> widgetBuys;
	cout << (" How many Gadgets would you like to buy??") << endl;
	cin >> gadgetBuys;
	cout << (" How many Toggles would you like to buy??") << endl;
	cin >> toggleBuys;

	total = (widgetBuys * widget) + (gadgetBuys * gadget) + (toggleBuys * toggle);

	return total;

}

double increasePrice(double &widget, double &gadget, double &toggle)
{
	string userInput;
	double changeAmount = 0;

	cout << (" Please enter the item you wish to change") << endl;
	cin >> userInput;

	cout << ("How much would you like to change it by ?") << endl;
	cin >> changeAmount;

	if (userInput == "widget")
	{
		widget += changeAmount;
	}
	else if (userInput == "gadget")
	{
		gadget += changeAmount;
	}
	else if (userInput == "toggle")
	{
		toggle += changeAmount;
	}


	return widget, gadget, toggle;
}

void repeatF(char& repeat)
{
	cout << "\nWould you like to use the program again??" << endl;
	cin >> repeat;
}

void writeToFile(double &widget, double &gadget, double &toggle)
{
	ofstream myfile;
	myfile.open("newfile.txt");
	myfile << " \n Widget: Cost " << widget << "\n\n Gadget: Cost " << gadget << " \n\n Toggle Cost: " << toggle << endl;
	myfile.close();
}
