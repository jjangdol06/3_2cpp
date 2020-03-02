#include "Triangle.h"

Triangle::Triangle(double width, double height, string type)
	:Polygon(width, height, type)
{}
double Triangle::getArea()
{
	return getWidth() * getHeight() / 2;
}
