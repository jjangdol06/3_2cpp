#include "CreditLineAccount.h"
#include "Account.h"

int CreditLineAccount::withdraw(int amount) 
{
	int b = getBalance() + creditLine;
	//setBalance(b + creditLine);
	if (b < amount) {
		cout << "잔액이 부족합니다." << endl;
		return 0;
	}
	else {
		setBalance(getBalance() - amount);
		return amount;
	}
}

CreditLineAccount::CreditLineAccount(int accountNo, string name, int balance, int creditLine)
	:Account(accountNo, name, balance), creditLine(creditLine)
{}
