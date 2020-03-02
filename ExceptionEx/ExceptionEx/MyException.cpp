#include <iostream>
#include <string>
using namespace std;
class MyException {
	int lineNo; //��� ��
	string func, msg; //func�� ��� ��
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
	:MyException(lineNo, func, "�Աݾ��� �����Դϴ�.") //�ʿ� �޼��� �����ϴ� �ϸ�
{}

BalanceOutOfBoundsException::BalanceOutOfBoundsException(int lineNo, string func)
	: MyException(lineNo, func, "�ܾ��� �����մϴ�..")
{
}
