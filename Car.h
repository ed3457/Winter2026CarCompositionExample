#pragma once
#include "Wheel.h"
#include <string>
using namespace std;
class Car
{
private:
	Wheel carWheels[4];
	string make;
	int year; 

public:
	void setMake(string m);
	string getMake();

	void setYear(int y);
	int getYear(); 

	void setWheel(Wheel w, int index);

	Wheel & getWheel(int index);

	void printCarInfo();// Print Make, Year, and the info for all wheels 

};

