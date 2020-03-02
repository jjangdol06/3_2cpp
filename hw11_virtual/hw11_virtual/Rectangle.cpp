#include "Rectangle.h"

Rectangle::Rectangle(double width, double height, string type)
	:Polygon(width, height, type)
{
}

bool Rectangle::IsSquare()
{
	if (getWidth() == getHeight())
		return true;
	else
		return false;
}

double Rectangle::getArea()
{
	return getWidth() * getHeight();
}
