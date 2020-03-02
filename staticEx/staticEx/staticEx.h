#pragma once
#ifndef _STATICEX_H_
#define _STATICEX_H_

class Circle {
	static int numOfCircles;
	int radius;
public:
	Circle(int r=1);
	~Circle(){ numOfCircles--; }
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircles() { return numOfCircles; }
};
inline Circle::Circle(int r) {
	radius = r;
	numOfCircles++;
}
int Circle::numOfCircles = 0;
#endif

