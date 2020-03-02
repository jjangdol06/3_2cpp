#pragma once
#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <iostream>
#include <string>
using namespace std;
using std::string;

class Account {
	int accountNo;
	string name;
	int balance;
public:
	Account(int accountNo, string name, int balance);
	~Account();

	void deposit(int amount);
	int withdraw(int amount);
	void check();
	int getBalance();
	void setBalance(int m);
};
#endif // !_ACCOUNT_H

