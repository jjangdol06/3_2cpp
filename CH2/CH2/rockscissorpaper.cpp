#include <iostream>
using namespace std;

int main() {
	string s;
	cout << "�ι̿�>> ";
	cin >> s;

	string t;
	cout << "�ٸ���>> ";
	cin >> t;

	if (s == "����" && t == "��")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	if (s == "����" && t == "����")
		cout << "�ٸ����� �̰���ϴ�." << endl;
	if (s == "����" && t == "����")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	if (s == "����" && t == "��")
		cout << "�ٸ����� �̰���ϴ�." << endl;
	if (s == "��" && t == "����")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	if (s == "��" && t == "����")
		cout << "�ٸ����� �̰���ϴ�." << endl;
	else 
		cout << "�����ϴ�." << endl;
	
	return 0;
}