#include <iostream>
using std::cout;
using std::endl;

#include "FruitSeller.h"

int FruitSeller::SaleApple(int n) {  //�޾ƿ��� �Ű����� �̸��� �ٸ��� ���൵ ��� ����. ���� ����Լ������� ������ ����
	const int APPLE_UNITCOST = 1000; //����� �빮��, const�� ���, java������ final

	int num = n / APPLE_UNITCOST;

	numOfApple -= num;
	money += n;

	return num;
}

void FruitSeller::ShowResult() const { //fruitseller��� ��� �Լ��� ��ü�� �����ϰ� ���� ��
	cout << "���� ���: " << numOfApple << "��" << endl;
	cout << "�Ǹ� ���� " << money << "��" << endl;
}
