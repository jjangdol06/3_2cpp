#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main() {

	int lt_x, lt_y, rb_x, rb_y;

	cout << "���� �� ��ǥ�� �Է��ϼ���: ";
	cin >> lt_x >> lt_y;
	cout << "������ �Ʒ� ��ǥ�� �Է��ϼ���: ";
	cin >> rb_x >> rb_y;

	Point p1(lt_x, lt_y);
	Point p2(rb_x, rb_y);

	Rectangle rect(p1, p2);

	cout<< rect.getArea();

	return 0;
}

//���� �Ҵ� �� ��ü�� �Ҹ��ڰ� ���� ȣ�� �Ǵ�?
//delete�� �� ȣ��ȴ�.