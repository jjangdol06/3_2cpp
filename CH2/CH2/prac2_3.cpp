#include <iostream>
using namespace std;

int main() {
	int a, b, max;
	cout << "�� ���� �Է��϶�>> ";
	cin >> a >> b;
	if (a > b)
		max = a;
	else
		max = b;
	cout << "ū �� = " << max;
}