#pragma once
#ifndef _CHECKINGTRAFFICCARDACCOUNT_H
#define _CHECKINGTRAFFICCARDACCOUNT_H
#include <iostream>
#include "CheckingAccount.h"

class CheckingTrafficCardAccount :public CheckingAccount {
	bool hasTrafficCard;
public:
	CheckingTrafficCardAccount(int accountNo, string name, int balance, string cardNo, bool hasTrafficCard);
	int payTrafficCard(string cdNo, int amount);
};
#endif
