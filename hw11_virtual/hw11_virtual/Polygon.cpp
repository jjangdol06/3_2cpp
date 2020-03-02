#include "Polygon.h"
#include <iostream>
using namespace std;

Polygon::Polygon(double width, double height, string type)
{
	this->width = width;
	this->height = height;
	this->type = type;
}

//�����͸� ���� ���� ����v
void Polygon::ShowInfo()
{
	//polygon�� Ÿ�� ����ϱ�
	cout << "����: " << width << "����: " << height << " Ÿ��: " << type;
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
