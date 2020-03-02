#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
using namespace std;

int main (void){
	Polygon* shape[3];
	shape[0] = new Rectangle(3.0, 5.0, "Rectangle");
	shape[1] = new Square(3.0, "Square");
	shape[2] = new Triangle(5.0, 7.0, "Triangle");

	for (int i = 0; i < 3; i++) {
		shape[i]->ShowInfo();
		cout <<  " 의 넓이는 " << shape[i]->getArea() << " 입니다." << endl;

		Rectangle* r = dynamic_cast<Rectangle*>(shape[i]);//(Rectangele*)shape[i]와 비슷한효과 다운캐스팅
		if (r != NULL) {
			if (r->IsSquare())
				cout << "shpaes[" << i << "]는 정사각형입니다." << endl;
			else
				cout << "shpaes[" << i << "]는 직사각형입니다." << endl;
		}
	}

}