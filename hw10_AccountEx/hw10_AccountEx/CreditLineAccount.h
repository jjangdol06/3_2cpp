#pragma once
#ifndef _CREDITLINEACCOUNT_H
#define _CREDITLINEACCOUNT_H
#include "Account.h"
class CreditLineAccount :public Account {
	int creditLine;
public:
	int withdraw(int amount);
	CreditLineAccount(int accountNo, string name, int balance, int creditLine);
};
#endif