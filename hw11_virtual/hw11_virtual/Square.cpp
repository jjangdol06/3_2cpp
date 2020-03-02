#include "Square.h"

Square::Square(double squareW, string type)
	:Rectangle(squareW, squareW, type)
{ }

double Square::getArea()
{
	return getWidth() * getWidth();
}
