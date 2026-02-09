#include "Car.h"
#include <iostream>
using namespace std; 
void Car::setMake(string m)
{
	make = m;
}

string Car::getMake()
{
	return make;
}

void Car::setYear(int y)
{
	year = y;
}

int Car::getYear()
{
	return year;
}

void Car::setWheel(Wheel w, int index)
{
	if (index >= 0 && index <= 3)
		carWheels[index] = w;
	//TODO: raise an exception if the index is out of range


}

Wheel& Car::getWheel(int index)
{
	if (index >= 0 && index <= 3)
		return carWheels[index];

	// TODO:  raise an exception if the index is out of range
}

void Car::printCarInfo()
{
	cout << getMake() << endl;
	cout << getYear() << endl; 
	//write code to print the diameter of all the wheels 
	for (int i = 0; i < 4; i++)
	{
		cout << carWheels[i].getDiameter() << endl;
	}

}
