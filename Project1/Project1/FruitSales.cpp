#include <iostream>
using std::cout;
using std::endl;

#include "FruitSeller.h"
#include "FruitBuyer.h"

void Fn();

int main(void) {
	//cout << "메인 시작";

	FruitSeller seller(20); //FruitSeller 객체 생성
	FruitBuyer buyer(5000); //FruitBuyer 객체 생성
	//FruitSeller seller;
	//FruitBuyer buyer;

	//cout << "함수 호출";
	//Fn();
	//cout << "함수 복귀";

	//1안
	//seller.SetNumOfApple(20);
	//seller.SaleApple(0);

	/*2안
	seller.Init(20);
	buyer.Init(5000);*/

	cout << "판매자 상태" << endl;
	seller.ShowResult();

	//구매자의 구매 활동
	buyer.BuyApple(seller, 2000);

	//결과 보여주기
	cout << "판매자" << endl;
	seller.ShowResult();
	cout << "구매자" << endl;
	buyer.ShowResult();

	return 0;

	//cout << "메인 끝";
}

void Fn()
{
	FruitSeller seller(20); //FruitSeller 객체 생성   m=0, n=20
	FruitBuyer buyer(5000); //FruitBuyer 객체 생성
	//FruitSeller seller;
	//FruitBuyer buyer;

	//1안
	//seller.SetNumOfApple(20);
	//seller.SaleApple(0);

	/*2안
	seller.Init(20);
	buyer.Init(5000);*/

	cout << "판매자 상태" << endl;
	seller.ShowResult();

	//구매자의 구매 활동
	buyer.BuyApple(seller, 2000);

	//결과 보여주기
	cout << "판매자" << endl;
	seller.ShowResult();
	cout << "구매자" << endl;
	buyer.ShowResult(); //return이란 키워드가 없으면 마지막 줄을 실행하고 나서 객체가 소멸하게 된다. main 함수에서는 seller나 buyer객체를 참조할 수 없게 된다.
	//객체가 소멸 되면 할당받은 메모리와 이름이 없어진다. 객체가 소멸되고 남은 것이 없다. 일반적으로 소멸자를 사용하지 않아도 된다.
	//어떤 객체는 포인터 변수같은 것을 이용해서 객체 밖에 정보를 유지하고 있을 수 도 있음
}