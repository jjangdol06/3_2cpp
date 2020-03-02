#pragma once
#ifndef _CHECKINGACCOUNT_H
#define _CHECKINGACCOUNT_H
#include <iostream>
#include "Account.h"

class CheckingAccount: public Account {
	string cardNo;
public:
	int pay(string cardNo, int amount);
	string getcardNo();
	CheckingAccount(int accountNo, string name, int balance, string cardNo);
};
#endif
