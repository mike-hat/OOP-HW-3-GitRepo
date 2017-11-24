//WaterVehicle is the parent to Submarine
#ifndef WATERVEHICLE_H
#define WATERVEHICLE_H

#include <iostream>
#include <vector>

using namespace std;


class WaterVehicle
{
protected://protected so Submarine class may access these
	vector <vector<int> > grid;
	int rows = 10, columns = 10;
	int length;
	int rowStartLoc;
	int colStartLoc;
	char orientation;
	bool sunk = false;

public:
	WaterVehicle();
	void display();//display vehicle
	void setLength(int _length);//set vehicle length
	void setRowStartLoc(int _row);//set vehicle row starting location if > 10, err
	void setColStartLoc(int _column);//set vehicle column starting locationif > 10, err
	void setOrientation(char _orientation);//set vehicle orientation
	void setSunk(bool _sunk);//set whether or not vehicle is sunk
	int getLength();//get vehicle length
	int getRowStartLoc();//get vehicle row starting location
	int getColStartLoc();//get vehicle column starting location
	char getOrientation();//get vehicle orientation
	bool getSunk();//get vehicle's sunk status
};


#endif // !WATERVEHICLE_H
