#include <iostream>
using std::cout;
using std::endl;

#include "FruitSeller.h"

int FruitSeller::SaleApple(int n) {  //받아오는 매개변수 이름을 다르게 써줘도 상관 없다. 보통 멤버함수에서는 간단히 정의
	const int APPLE_UNITCOST = 1000; //상수는 대문자, const를 사용, java에서의 final

	int num = n / APPLE_UNITCOST;

	numOfApple -= num;
	money += n;

	return num;
}

void FruitSeller::ShowResult() const { //fruitseller라는 멤버 함수의 몸체를 정의하고 싶은 것
	cout << "남은 사과: " << numOfApple << "개" << endl;
	cout << "판매 수익 " << money << "원" << endl;
}
