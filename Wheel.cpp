#include "Wheel.h"

void Wheel::setDiameter(float d)
{
	if (d >= 5)
		diameter = d;
	//TODO: Add an exception if the data is not valid
}

float Wheel::getDiameter()
{
	return diameter;
}

Wheel::Wheel():Wheel(10)
{
}

Wheel::Wheel(float d)
{
	setDiameter(d);
}
