#include <iostream>
#include "staticEx.h"
using namespace std;

int main() {
	Circle *p = new Circle[10];
	cout << "���� ����: " << Circle::getNumOfCircles() << endl;

	delete[] p;
	cout << "���� ����: " << Circle::getNumOfCircles() << endl;

	Circle a;
	cout << "���� ����: " << Circle::getNumOfCircles() << endl;

	Circle b;
	cout << "���� ����: " << Circle::getNumOfCircles() << endl;
}