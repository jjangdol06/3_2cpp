#ifndef _FUITSELLER_H_ //if not define
#define _FUITSELLER_H_  // 최초 한번만 참고할 수 있는 구조 p.34

class FruitSeller { //함수의 선언과 타입에 대한 정보만 있음  --선언문--
	const int APPLE_UNITCOST; //원래는 .cpp에 존재했다. 초기값을 선언할 수 없다.
	int numOfApple;
	int money;
	void Init(int money, int numOfApple);
public:
	FruitSeller(int money, int numOfApple);
	FruitSeller(int numOfApple);

	int SaleApple(int);
	void ShowResult() const;  //함수의 선언은 메인 위에, 함수의 정의는 메인 아래에

};

inline void FruitSeller::Init(int m, int n)
{
	numOfApple = n;
	money = m;
}

inline FruitSeller::FruitSeller(int numOfApple) : APPLE_UNITCOST(1000) //나의 멤버 초기화
{
	Init(0, numOfApple);
}

inline FruitSeller::FruitSeller(int m, int n) : APPLE_UNITCOST(1000)
{
	numOfApple = n;
	money = m;
}

#endif //정의가 안되어있으면 넘겨라, 메인에서 선언되어 있을 수 있다.