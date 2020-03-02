#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main() {

	int lt_x, lt_y, rb_x, rb_y;

	cout << "왼쪽 위 좌표를 입력하세요: ";
	cin >> lt_x >> lt_y;
	cout << "오른쪽 아래 좌표를 입력하세요: ";
	cin >> rb_x >> rb_y;

	Point p1(lt_x, lt_y);
	Point p2(rb_x, rb_y);

	Rectangle rect(p1, p2);

	cout<< rect.getArea();

	return 0;
}

//동적 할당 된 객체는 소멸자가 언제 호출 되니?
//delete할 때 호출된다.