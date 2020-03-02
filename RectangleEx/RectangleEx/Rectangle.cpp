#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int  Rectangle::getArea(void) const
{
	int w = rb.GetX() - lt.GetX();
	int h = lt.GetY() - rb.GetY();
	int area = w * h;

	return area;
}

int  Rectangle::getCircumference(void)
{
	int c = (rb.GetX() - lt.GetX() + lt.GetY() - rb.GetY()) * 2;
	return c;
}

Rectangle::~Rectangle()
{
	cout << "¼Ò¸êÀÚ È£Ãâ";
}
