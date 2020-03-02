#include <iostream>
#include "Child.h"
using namespace std;

void Child::obtainBead(Child& c, int n) 
{
	c.loseBead(n);
	this->numOfMarble += n;

}

int Child::loseBead(int n)
{
	if (numOfMarble < n) {
		int r = numOfMarble;
		numOfMarble = 0;
		return r;
	}else
	numOfMarble -= n;
}






int Child::GetMarble(void) 
{
	return numOfMarble;
}

bool Child::SetMarble(int n)
{
	if (n < 0) {
		return false;
	}
	numOfMarble = n;
	return true;
}
bool Child::PlayGame(Child& c1, Child& c2, int n) 
{
	int a = c1.GetMarble();
	int b = c2.GetMarble();
	if (n > b) {
		cout << "오류: 구슬이 부족합니다.";
		return false;
	}
	c1.SetMarble(a + n);
	c2.SetMarble(b - n);
	return true;
}

void Child::ShowResult(void)
{
	cout << numOfMarble <<endl;
}