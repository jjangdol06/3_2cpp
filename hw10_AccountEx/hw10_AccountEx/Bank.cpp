#include <iostream>
#include <string>
#include "Account.h"
#include "../../ExceptionEx/ExceptionEx/MyException.cpp"
using namespace std;

int main(){
	
	int x, y;
	Account a1(1, "jiyeon", 60000);

	cout << "입금액을 입력하세요: ";
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

	cout << "출금액을 입력하세요: ";
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

	/*catch (MyException & m) { 도 가능하다. 문제점이라면 다 잡힌다. 구체화>>부모클래스 순으로 나열
		m.print();
	} 
	catch(...){  나머지는 별도의 catch절에서 처리한다.
	}*/
}