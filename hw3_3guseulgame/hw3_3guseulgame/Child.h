#pragma once
#ifndef _CHILD_H
#define _CHILD_H
using namespace std;

class Child {
	int numOfMarble;

public:
	bool Init(int n);
	//Child();
	Child(int n);
	~Child();

	void obtainBead(Child& c, int n);
	int loseBead(int n);

	int GetMarble(void);
	bool SetMarble(int n);
	bool PlayGame(Child& c1, Child& c2, int n);
	void ShowResult(void);
};
/*inline Child::Child()
{
	Init(0);
}*/
inline Child::Child(int n)
{
	Init(n);
}
inline bool Child::Init(int n) {
	if (n < 0) {
		cout << "오류: 범위가 벗어난 값 ";
			return false;
	}
	numOfMarble = n;
	return true;
}
inline Child::~Child()
{
}
#endif

