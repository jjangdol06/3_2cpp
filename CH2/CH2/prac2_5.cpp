#include <iostream>
using namespace std;

int main() {
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	char x[100];
	cin.getline(x, 100, '\n');
	int count = 0;
	while (x[count] != '\0')count++;
	cout << "x�� ������ " << count;

}