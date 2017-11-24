#include "WaterVehicle.h"


//default constructor 
//fills a 2d vector with zeros
WaterVehicle::WaterVehicle()
{
	grid = vector<vector<int> > (rows, vector<int>(columns, 0)); //2d vector with each element set to 0
}



//display function
//derived from WaterVehicle class
void WaterVehicle::display()
{
	//print the grid to the console
	int r = 0, c = 0; //row and column number variables
	cout << "    ";
	for (int i = 0; i < 10; i++) //print the column number above the grid
	{
		cout << c << " ";
		c++;
	}
	cout << endl << endl;
	for (int i = 0; i < rows; i++) //print the grid with the row number in front of it
	{
		cout << r << "   ";
		for (int j = 0; j < columns; j++)
		{
			//cout << c << "   ";
			cout << grid[i][j] << " ";
		}

		cout << endl;
		//cout << r << " ";
		c++;
		r++;
	}
}


//setLength function 
//derived from WaterVehicle class
void WaterVehicle::setLength(int _length)
{
	if (_length < 0 && _length > 9)
	{
		cout << "Error: length must be between 0 and 9\n";
		return;
	}
	else
	length = _length;
}



//setRowStartLoc function derived WaterVehicle
//set the stating location for the Submarine
void WaterVehicle::setRowStartLoc(int _row)
{
	if (_row > 9 || _row < 0) //ensure location is with the grid
	{
		cout << "\nError: There are 10 rows. Starting row location must be between 0 and 9."; //also checked in main()
		return;
	}
	else
	rowStartLoc = _row;
}



//setColStartLoc function 
//set the starting location for the Submarine
void WaterVehicle::setColStartLoc(int _column)
{
	if (_column > 9 || _column< 0)//make sure starting location is within the grid
	{
		cout << "\nError: There are 10 columns. Starting column location must be between 0 and 9."; //also chekced in main()
		return;
	}
	else
	colStartLoc = _column;
}



//setOrientation function 
//set the orientation of the submarine
void WaterVehicle::setOrientation(char _orientation)
{
	tolower(_orientation);
	if (orientation != 'h' && orientation != 'v')//make sure user enters 'h' or 'v' (also error checked in main()
	{
		cout << "\nError: enter \'v\' for vertical orientation or \'h\' for horizontal orientation.";
	}
	else
	orientation = _orientation;
}



//setSunk function 
void WaterVehicle::setSunk(bool _sunk)
{
	sunk = _sunk;
}



//getLength function
int WaterVehicle::getLength()
{
	return length;
}



//getRowStartLoc function derived from WaterVehicle
//get row starting location for submarine
int WaterVehicle::getRowStartLoc()
{
	return rowStartLoc;
}



//getColStartLoc function derived from WaterVehicle
//get the column starting location for submarine
int WaterVehicle::getColStartLoc()
{
	return colStartLoc;
}



//getOrientation function
char WaterVehicle::getOrientation()
{
	return orientation;
}


//getSunk function 
bool WaterVehicle::getSunk()
{
	return sunk;
}
