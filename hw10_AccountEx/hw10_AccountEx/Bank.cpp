#include <iostream>
#include <string>
#include "Account.h"
#include "../../ExceptionEx/ExceptionEx/MyException.cpp"
using namespace std;

int main(){
	
	int x, y;
	Account a1(1, "jiyeon", 60000);

	cout << "�Աݾ��� �Է��ϼ���: ";
	cin >> x;
	try {
		if (x < 0)
			throw MalformedData(19, "main()");
		a1.deposit(x);
		a1.check();
	}
	catch (MalformedData & m) {
		m.print();
	}

	cout << "��ݾ��� �Է��ϼ���: ";
	cin >> y;
	try {
		if (y < 0)
			throw MalformedData(29, "main()");
		if (a1.withdraw(y) == 0)
			throw BalanceOutOfBoundsException(31, "main()");
	}
	catch (MalformedData & m) {
		m.print();
	}
	catch (BalanceOutOfBoundsException & b) {
		b.print();
	}

	return 0;

	/*catch (MyException & m) { �� �����ϴ�. �������̶�� �� ������. ��üȭ>>�θ�Ŭ���� ������ ����
		m.print();
	} 
	catch(...){  �������� ������ catch������ ó���Ѵ�.
	}*/
}