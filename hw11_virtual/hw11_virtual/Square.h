#pragma once
#ifndef _SQUARE_H
#define  _SQUARE_H
#include "Rectangle.h"

class Square :public Rectangle {
public:
	Square(double sqaureW, string type);
	virtual double getArea();
};
#endif // !_SQUARE_H

