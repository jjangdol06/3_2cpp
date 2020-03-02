#pragma once
#ifndef _POINT_H
#define _POINT_H
#include <iostream>
using namespace std;

class Point {
	int x, y;

public:
	void Init(int x, int y);

	Point();
	Point(int x, int y);

	int GetX(void) const;
	int GetY(void) const;

	bool SetX(int xPos);
	bool SetY(int yPos);
};

inline Point::Point()
{
	Init(0, 0); //0,0으로 초기화
	cout << "생성자 호출";
}

inline Point::Point(int x, int y)
{
	Init(x, y);
	cout << "생성자 호출";
}

inline void Point::Init(int x, int y)
{
	SetX(x);
	SetY(y);
}

#endif // !_RECTANGLE_H

