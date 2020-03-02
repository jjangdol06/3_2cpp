#pragma once
#ifndef _RECTANGLE_H
#define  _RECTANGLE_H
#include "Polygon.h"

class Rectangle :public Polygon {

public:
	Rectangle(double width, double height, string type);
	bool IsSquare(); 
	//�ݺ����� ���ؼ� ������ �� �ִ��� Ȯ���ϰ�
	//���� ��ɰ� ���� ����� �����ؼ� ����
	virtual double getArea();
};
#endif // !_RECTANGLE_H

