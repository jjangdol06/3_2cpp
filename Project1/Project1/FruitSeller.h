#ifndef _FUITSELLER_H_ //if not define
#define _FUITSELLER_H_  // ���� �ѹ��� ������ �� �ִ� ���� p.34

class FruitSeller { //�Լ��� ����� Ÿ�Կ� ���� ������ ����  --����--
	const int APPLE_UNITCOST; //������ .cpp�� �����ߴ�. �ʱⰪ�� ������ �� ����.
	int numOfApple;
	int money;
	void Init(int money, int numOfApple);
public:
	FruitSeller(int money, int numOfApple);
	FruitSeller(int numOfApple);

	int SaleApple(int);
	void ShowResult() const;  //�Լ��� ������ ���� ����, �Լ��� ���Ǵ� ���� �Ʒ���

};

inline void FruitSeller::Init(int m, int n)
{
	numOfApple = n;
	money = m;
}

inline FruitSeller::FruitSeller(int numOfApple) : APPLE_UNITCOST(1000) //���� ��� �ʱ�ȭ
{
	Init(0, numOfApple);
}

inline FruitSeller::FruitSeller(int m, int n) : APPLE_UNITCOST(1000)
{
	numOfApple = n;
	money = m;
}

#endif //���ǰ� �ȵǾ������� �Ѱܶ�, ���ο��� ����Ǿ� ���� �� �ִ�.