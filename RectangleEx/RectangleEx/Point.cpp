#include <iostream>
#include "Point.h"
using namespace std;

int Point::GetX(void) const
{
	return x;
}
int Point::GetY(void) const  //const ����Լ������� const ��������� ȣ���� �� �ִ�.
{
	return y;
}

bool Point::SetX(int xPos)
{
	if (xPos < 0 || xPos>100) {
		return false;
	}
	x = xPos;
	return true;
}

bool Point::SetY(int yPos)
{
	if (yPos < 0 || yPos>100) {
		return false;
	}
	y = yPos;
	return true;
}