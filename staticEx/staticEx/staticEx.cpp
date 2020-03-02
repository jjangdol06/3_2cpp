#include <iostream>
#include "staticEx.h"
using namespace std;

int main() {
	Circle *p = new Circle[10];
	cout << "원의 개수: " << Circle::getNumOfCircles() << endl;

	delete[] p;
	cout << "원의 개수: " << Circle::getNumOfCircles() << endl;

	Circle a;
	cout << "원의 개수: " << Circle::getNumOfCircles() << endl;

	Circle b;
	cout << "원의 개수: " << Circle::getNumOfCircles() << endl;
}