#include "Polygon.h"
#include <iostream>
using namespace std;

Polygon::Polygon(double width, double height, string type)
{
	this->width = width;
	this->height = height;
	this->type = type;
}

//포인터를 통한 직접 접근v
void Polygon::ShowInfo()
{
	//polygon의 타입 출력하기
	cout << "넓이: " << width << "높이: " << height << " 타입: " << type;
}

double Polygon::getWidth()
{
	return width;
}

double Polygon::getHeight()
{
	return height;
}

string Polygon::getType()
{
	return type;
}

void Polygon::setWidth(double width)
{
	this->width = width;
}

void Polygon::setHeight(double height)
{
	this->height = height;
}

void Polygon::setType(string type)
{
	this->type = type;
}
