#pragma once
#ifndef _FUITBUYER_H_ //if not define
#define _FUITBUYER_H_  // 최초 한번만 참고할 수 있는 구조 p.34

#include "FruitSeller.h"

class FruitBuyer { //함수의 선언과 타입에 대한 정보만 있음  --선언문--
	int numOfApple;
	int balance;

public:
	void Init(int balance, int numOfApple = 0);
	
	int BuyApple(FruitSeller& seller, int balance);
	void ShowResult() const;  //함수의 선언은 메인 위에, 함수의 정의는 메인 아래에

};

inline void FruitBuyer::Init(int m, int n)
{
	numOfApple = n;
	balance = m;
}

#endif //정의가 안되어있으면 넘겨라, 메인에서 선언되어 있을 수 있다.