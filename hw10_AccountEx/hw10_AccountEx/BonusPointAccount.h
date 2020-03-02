#ifndef _BONUSPOINTACCOUNT_H
#define _BONUSPOINTACCOUNT_H
#include "Account.h"

class BonusPointAccount:public Account{
	int bonusPoint;
public:
	void deposit(int amount);
	void check();
	BonusPointAccount(int accountNo, string name, int balance);
	~BonusPointAccount();
};

#endif
