#pragma once
#ifndef _TRIANGLE_H
#define  _TRIANGLE_H
#include "Polygon.h"

class Triangle :public Polygon {
public:
	Triangle(double width, double height, string type);
	virtual double getArea();
};
#endif // !_TRIANGLE_H

