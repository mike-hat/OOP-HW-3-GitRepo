#include "Submarine.h"
#include "WaterVehicle.h"
#include <cstdlib>	//used for rand within torpedo


using namespace std;

int main()
{
	Submarine sub, sub2; //create 2 submarines
	int length, row, column;//submarine attribute variables input by user
	char orientation;//sub attribute input by user

	//display 10X10 grid filled with zeros
	sub.display();



	//input and set sub length
	cout << "Enter submarine length (must be between 0 and 9): ";
	cin >> length;

	while (cin.fail())//ensure proper input
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "\nEnter an integer for length between 0 and 9: ";
		cin >> length;
	}
	sub.setLength(length);


	//input and set sub starting positions
	cout << "Enter the starting row for the sub: ";
	cin >> row;
	
	while (cin.fail()) //error checking
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "\nEnter an integer for starting row between 0 and 9: ";
		cin >> row;
	}	
	cout << "Enter the starting column for the sub: ";
	cin >> column;

	while (cin.fail()) //error checking
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "\nEnter an integer for column between 0 and 9: ";
		cin >> column;
	}
	sub.setRowStartLoc(row);
	sub.setColStartLoc(column);


	//input and set the sub orientation
	cout << "Enter the orientation of the sub: ";
	cin >> orientation;
	tolower(orientation);
	while (orientation != 'h' && orientation != 'v')//error checking
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "\nEnter \'h\' for horizontonal orientation or \'v\' for vertical orientation: ";
		cin >> orientation;
		tolower(orientation);
	}
	sub.setOrientation(orientation);

	//place the sub int the grid and display results
	sub.setSub(orientation, length, row, column);
	cout << endl << endl << "sub\n";
	sub.display();

	//set sub2 equal to sub and display results
	cout << endl << endl << "sub2\n";
	sub2 = sub;
	sub2.setSub(orientation, length, row, column);
	sub2.display();

	//fire torepedos and display results
	sub.torpedo();
	sub.display();

	return 0;
}