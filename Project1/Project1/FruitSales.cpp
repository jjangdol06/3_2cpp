#include <iostream>
using std::cout;
using std::endl;

#include "FruitSeller.h"
#include "FruitBuyer.h"

void Fn();

int main(void) {
	//cout << "���� ����";

	FruitSeller seller(20); //FruitSeller ��ü ����
	FruitBuyer buyer(5000); //FruitBuyer ��ü ����
	//FruitSeller seller;
	//FruitBuyer buyer;

	//cout << "�Լ� ȣ��";
	//Fn();
	//cout << "�Լ� ����";

	//1��
	//seller.SetNumOfApple(20);
	//seller.SaleApple(0);

	/*2��
	seller.Init(20);
	buyer.Init(5000);*/

	cout << "�Ǹ��� ����" << endl;
	seller.ShowResult();

	//�������� ���� Ȱ��
	buyer.BuyApple(seller, 2000);

	//��� �����ֱ�
	cout << "�Ǹ���" << endl;
	seller.ShowResult();
	cout << "������" << endl;
	buyer.ShowResult();

	return 0;

	//cout << "���� ��";
}

void Fn()
{
	FruitSeller seller(20); //FruitSeller ��ü ����   m=0, n=20
	FruitBuyer buyer(5000); //FruitBuyer ��ü ����
	//FruitSeller seller;
	//FruitBuyer buyer;

	//1��
	//seller.SetNumOfApple(20);
	//seller.SaleApple(0);

	/*2��
	seller.Init(20);
	buyer.Init(5000);*/

	cout << "�Ǹ��� ����" << endl;
	seller.ShowResult();

	//�������� ���� Ȱ��
	buyer.BuyApple(seller, 2000);

	//��� �����ֱ�
	cout << "�Ǹ���" << endl;
	seller.ShowResult();
	cout << "������" << endl;
	buyer.ShowResult(); //return�̶� Ű���尡 ������ ������ ���� �����ϰ� ���� ��ü�� �Ҹ��ϰ� �ȴ�. main �Լ������� seller�� buyer��ü�� ������ �� ���� �ȴ�.
	//��ü�� �Ҹ� �Ǹ� �Ҵ���� �޸𸮿� �̸��� ��������. ��ü�� �Ҹ�ǰ� ���� ���� ����. �Ϲ������� �Ҹ��ڸ� ������� �ʾƵ� �ȴ�.
	//� ��ü�� ������ �������� ���� �̿��ؼ� ��ü �ۿ� ������ �����ϰ� ���� �� �� ����
}