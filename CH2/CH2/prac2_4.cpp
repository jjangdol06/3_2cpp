#include <iostream>
using namespace std;

int main() {
	double a[5], max;
	cout << "5���� �Ǽ��� �Է��϶�>>";
	for(int i=0; i<5; i++)
		cin >> a[i];
	max = a[0];
	for (int i = 0; i < 5; i++) {
		if (max < a[i])
			max = a[i];
	}
	cout << "���� ū �� = " << max;

	return 0;
}