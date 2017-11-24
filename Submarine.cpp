#include "Submarine.h"
#include <cstdlib>	//used for rand within torpedo

//default constructor
//creates a 2d vector and initializes each element to 0
Submarine::Submarine()
{
	//create a 2d vector and initialize all elemnets to zero
	grid = vector<vector<int> >(rows, vector<int>(columns, 0));
}


//setSub function
//sets the sub within the grid
void Submarine::setSub(char _orientation, int _length, int _row, int _column)
{
	if (_orientation == 'v') //if orientation is vertical
	{
		int tempRow = _row;//tempRow starts = to the input row, and increments through the length of the ship
		for (int i = 0; i < length; i++)
		{
			grid[tempRow][_column] = 1;
			tempRow++;
		}
	}
	else if (_orientation == 'h')//if orientation is horizontal
	{
		int tempColumn = _column;//tempColumn starts = to input column and increments through the length of the ship
		for (int i = 0; i < _length; i++)
		{
			grid[_row][tempColumn] = 1;
			tempColumn++;
		}
	}

}



//setDiveDepthFunction
void Submarine::setDiveDepth(int _diveDepth)
{
	diveDepth = _diveDepth;
}



//setSurfaced function
void Submarine::setSurfaced(bool _surfaced)
{
	surfaced = _surfaced;
}



//getDiveDepth function
int Submarine::getDiveDepth()
{
	return diveDepth;
}



//getSurfaced function
bool Submarine::getSurfaced()
{
	return surfaced;
}



//overloaded = operator function
//sets a new submarine object = to an existing submarine object
void Submarine::operator= (Submarine & rhs)
{
	//equate each variable that is used/relevant to the program
	length = rhs.length;
	columns = rhs.rows;
	rows = rhs.rows;
	orientation = rhs.orientation;
	
}



//torpedo function
//fires 15 torpedos randomly throughout the grid
//if it hits a point of the submarine, the grid value is set to 0
//if all grid values = 0, then the sub is sunk
void Submarine::torpedo()
{
	int torp, torp2; //2 are needed for the 2d vector
	srand(time(NULL));//seed rand()
	cout << endl << endl;
	for (int i = 0; i < 5000; i++) //create 15 torpedos, if they hit the sub, set that grid value = to 0
	{
		torp = rand() % 9;
		torp2 = rand() % 9;
		
		if (grid[torp][torp2] == 1)
		{
			grid[torp][torp2] = 0;
			cout << "\nHit at [" << torp << ", " << torp2 << "]" << endl;
		}
	}

	int count = 0;//counts each time the sub is not hit
	for (int i = 0; i < 10; i++)//determine if the sub still exists
	{
		for (int j = 0; j < 10; j++)
		{
			if (grid[i][j] == 1)//increment count each time a part of the sub exists
				count++;
		}
	}
	if (count == 0)//if no part of the sub exists, then it is sunk
	{
		cout << "\nSUB IS SUNK!\n";
		sunk = true;
	}
	else cout << "\nSUB IS AFLOAT!\n";//if parts of the sub exist, then the sub is afloat
	cout << endl << endl;
}