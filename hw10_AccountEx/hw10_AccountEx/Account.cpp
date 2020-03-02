#include "Account.h"
#include <iostream>
#include <string>
using namespace std;
using std::string;

Account::Account(int accountNo, string name, int balance)
{
	this->accountNo = accountNo;
	this->name = name;
	this->balance = balance;
}

Account::~Account()
{
}

void Account::deposit(int amount)
{
	balance = balance + amount;
}

int Account::withdraw(int amount)
{
	//if(amount<0) throw 
	if (balance<amount) {
		cout << "�ܾ��� �����մϴ�." << endl;
		return 0;
	}else {
		balance = balance - amount;
		return amount;
	}
}

void Account::check()
{
	cout << "�ܾ� ��ȸ: " << balance << endl;
}

int Account::getBalance()
{
	return balance;
}

void Account::setBalance(int m)
{
	balance = m;
}
