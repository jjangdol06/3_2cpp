#include <iostream>
#include "Child.h"
using namespace std;

int main()
{
	Child c1(15), c2(9);

	cout << "1�� ����" << endl;
	c1.PlayGame(c1, c2, 2);
	c1.ShowResult();
	c2.ShowResult();
	
	cout << "2�� ����" << endl;
	c2.PlayGame(c2, c1, 7);
	c1.ShowResult();
	c2.ShowResult();

	return 0;
}