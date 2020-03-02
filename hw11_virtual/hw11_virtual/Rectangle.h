#pragma once
#ifndef _RECTANGLE_H
#define  _RECTANGLE_H
#include "Polygon.h"

class Rectangle :public Polygon {

public:
	Rectangle(double width, double height, string type);
	bool IsSquare(); 
	//반복문을 통해서 접근할 수 있는지 확인하고
	//공통 기능과 차별 기능을 구분해서 접근
	virtual double getArea();
};
#endif // !_RECTANGLE_H

