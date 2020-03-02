#include <iostream>
using std::cout;
using std::endl;

#include "FruitBuyer.h"
#include "FruitSeller.h"

int FruitBuyer::BuyApple(FruitSeller& seller, int n) {  //받아오는 매개변수 이름을 다르게 써줘도 상관 없다. 보통 멤버함수에서는 간단히 정의
	//const int APPLE_UNITCOST = 1000; //상수는 대문자, const를 사용, java에서의 final

	balance -= n;
	numOfApple = seller.SaleApple(n);

	return 0;
}

void FruitBuyer::ShowResult() const{ //fruitseller라는 멤버 함수의 몸체를 정의하고 싶은 것
	cout << "구매한 사과: " << numOfApple << "개" << endl;
	cout << "은행 잔고: " << balance << "원" << endl;
}
