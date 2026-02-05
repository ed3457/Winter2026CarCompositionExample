// Winter2026CarCompositionExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Wheel.h"
#include "Car.h"
using namespace std; 
int main()
{
	Wheel w1(10);
	Wheel w2(10);
	Wheel w3(10);
	Wheel w4(10);

	Car Jeep1;

	Jeep1.setWheel(w1, 0);// Front- Right
	Jeep1.setWheel(w2, 1);// Front- Left
	Jeep1.setWheel(w3, 2);// Rear- Right
	Jeep1.setWheel(w4, 3);// Rear- left

	Jeep1.setYear(2024);
	Jeep1.setMake("Jeep GC");

	//Write code to change the diameter of the two rear wheels to 14

	Jeep1.getWheel(2).setDiameter(14);
	Jeep1.getWheel(3).setDiameter(14);

	cout<<Jeep1.getWheel(2).getDiameter()<<endl;
	cout << Jeep1.getWheel(3).getDiameter() << endl;
}

