#include "CheckingAccount.h"
#include <iostream>
using namespace std;

int CheckingAccount::pay(string cardNo, int amount)
{
	if (this->cardNo == cardNo) {
		withdraw(amount);
		return 1;
	}
	else {
		cout << "카드번호가 일치하지 않습니다." << endl;
		return 0;
	}
}

string CheckingAccount::getcardNo()
{
	return cardNo;
}

CheckingAccount::CheckingAccount(int accountNo, string name, int balance, string cardNo)
	:Account(accountNo, name, balance), cardNo(cardNo)
{}
