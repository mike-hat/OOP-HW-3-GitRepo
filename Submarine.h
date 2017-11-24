//derived from WaterVehicle
#include "WaterVehicle.h"


#ifndef SUBMARINE_H
#define SUBMARINE_H

#include <cmath>	//used for rand within torpedo
#include <ctime>	//used for rand within torpedo
//#include <cstdlib>	//used for rand within torpedo

class Submarine : public WaterVehicle
{

private:
	int diveDepth = 0; //unused........display with overloaded equals operator
	bool surfaced = false; //unused....display with overloaded equals operator

public:
	Submarine();
	void setDiveDepth(int _diveDepth);//set vehicles dive depth
	void setSurfaced(bool _surfaced);//set whether vehicle has surfaced
	void setSub(char _orientation, int _length, int _row, int _column);//set the sub into the grid
	int getDiveDepth();//get vehicle's dive depth
	bool getSurfaced();//get whether vehicle has surfaced
	void operator= (Submarine &rhs);//override = operator
	void torpedo();//fire torpedos at the vehicle
};
#endif // !SUBMARINE_H

