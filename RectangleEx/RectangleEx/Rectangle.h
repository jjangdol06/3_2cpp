#pragma once
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Point.h"
using namespace std;

class Rectangle {
	Point lt, rb;

public:
	bool Init(Point& leftTop, Point& rightBottom);
	Rectangle(Point& leftTop, Point& rightBottom);
	~Rectangle();

	int getArea(void) const;
	int getCircumference(void);
};

inline Rectangle::Rectangle(Point& leftTop, Point& rightBottom)
{
	Init(leftTop, rightBottom);
	cout << "생성자 호출";
}

inline bool Rectangle::Init(Point& leftTop, Point& rightBottom)
{
	if (leftTop.GetX() > rightBottom.GetX() || leftTop.GetY() < rightBottom.GetY()) {
		cout << "오류: 범위가 벗어난 값 ";
		return false;
	}

	lt = leftTop;
	rb = rightBottom;
	return true;
}
#endif // !_RECTANGLE_H

