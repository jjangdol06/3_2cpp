#pragma once
#ifndef _FUITBUYER_H_ //if not define
#define _FUITBUYER_H_  // ���� �ѹ��� ������ �� �ִ� ���� p.34

#include "FruitSeller.h"

class FruitBuyer { //�Լ��� ����� Ÿ�Կ� ���� ������ ����  --����--
	int numOfApple;
	int balance;

public:
	void Init(int balance, int numOfApple = 0);
	
	int BuyApple(FruitSeller& seller, int balance);
	void ShowResult() const;  //�Լ��� ������ ���� ����, �Լ��� ���Ǵ� ���� �Ʒ���

};

inline void FruitBuyer::Init(int m, int n)
{
	numOfApple = n;
	balance = m;
}

#endif //���ǰ� �ȵǾ������� �Ѱܶ�, ���ο��� ����Ǿ� ���� �� �ִ�.