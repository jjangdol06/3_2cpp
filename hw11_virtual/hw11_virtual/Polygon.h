#pragma once
#ifndef _POLYGON_H
#define _POLYGON_H
#include <string>
using std::string;

class Polygon {
	double width;
	double height;
	string type;
public:
	Polygon(double width, double height, string type);
	void ShowInfo();
	virtual double getArea()=0;
	double getWidth();
	double getHeight();
	string getType();
	void setWidth(double width);
	void setHeight(double height);
	void setType(string type);
};
#endif // !_POLYGON_H

