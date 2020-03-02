#include <iostream>
using std::cout;
using std::endl;

#include "FruitBuyer.h"
#include "FruitSeller.h"

int FruitBuyer::BuyApple(FruitSeller& seller, int n) {  //�޾ƿ��� �Ű����� �̸��� �ٸ��� ���൵ ��� ����. ���� ����Լ������� ������ ����
	//const int APPLE_UNITCOST = 1000; //����� �빮��, const�� ���, java������ final

	balance -= n;
	numOfApple = seller.SaleApple(n);

	return 0;
}

void FruitBuyer::ShowResult() const{ //fruitseller��� ��� �Լ��� ��ü�� �����ϰ� ���� ��
	cout << "������ ���: " << numOfApple << "��" << endl;
	cout << "���� �ܰ�: " << balance << "��" << endl;
}
