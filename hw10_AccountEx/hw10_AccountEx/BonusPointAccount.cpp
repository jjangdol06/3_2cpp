#include "BonusPointAccount.h"
#include "Account.h"
using namespace std;

void BonusPointAccount::deposit(int amount)
{
	bonusPoint += amount / 1000;
}

void BonusPointAccount::check()
{
	cout << "���ʽ� ����Ʈ �ܾ�: " << bonusPoint << endl;
}

BonusPointAccount::BonusPointAccount(int accountNo, string name, int balance)
	:Account(accountNo, name, balance)
{
	bonusPoint = 0;
}

BonusPointAccount::~BonusPointAccount()
{
}
