#include "CheckingTrafficCardAccount.h"
#include <iostream>
using namespace std;

CheckingTrafficCardAccount::CheckingTrafficCardAccount(int accountNo, string name, int balance, string cardNo, bool hasTrafficCard)
	:CheckingAccount(accountNo, name, balance, cardNo), hasTrafficCard(hasTrafficCard)
{ }

int CheckingTrafficCardAccount::payTrafficCard(string cdNo, int amount)
{
	if (getcardNo()==cdNo && hasTrafficCard == 1) {
		setBalance(getBalance() - amount);
		return 1;
	}
	else {
		cout << "교통카드 기능이 없습니다." << endl;
		return 0;
	}
}
