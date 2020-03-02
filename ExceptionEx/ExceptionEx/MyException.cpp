#include <iostream>
#include <string>
using namespace std;
class MyException {
	int lineNo; //없어도 됨
	string func, msg; //func도 없어도 됨
public:
	MyException(int n, string f, string m);
	void print();
};

class MalformedData :public MyException {
public:
	MalformedData(int lineNo, string func);
};
class BalanceOutOfBoundsException :public MyException {
public:
	BalanceOutOfBoundsException(int lineNo, string func);
};

MyException::MyException(int n, string f, string m)
	:lineNo(n), func(f), msg(m)
{}

void MyException::print()
{
	cout << func << " : " << lineNo << ", " << msg << endl;
}

MalformedData::MalformedData(int lineNo, string func)
	:MyException(lineNo, func, "입금액이 음수입니다.") //필요 메세지 설정하는 일만
{}

BalanceOutOfBoundsException::BalanceOutOfBoundsException(int lineNo, string func)
	: MyException(lineNo, func, "잔액이 부족합니다..")
{
}
