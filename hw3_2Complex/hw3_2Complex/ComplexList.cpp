#include <iostream>
#include "ComplexList.h"
#include "Complex.h"
using namespace std;

bool ComplexList::Set(int n, double r, double i) {
	//�ε����� ��ȿ���� Ȯ��
	if (n<0 || n>ListSize) {
		//�������
		return false;
	}
	else {
		cList[n].SetComplex(r, i);
		//(cList+n)->SetComplex(r,i);
		//*(cList+n).SetComplex(r,i);
		return true;
	}
}
Complex& ComplexList::Get(int n) {
	return *(cList+n);
}
int ComplexList::Length() {
	return ListSize;
}
Complex* ComplexList::GetComplexList() {
	return cList;
}

ostream& operator<<(ostream& os, ComplexList& cl) {
	for (int i = 0; i < cl.Length(); i++) {
		cl.Get(i).ShowComplex();
	}
	cout << endl;
	return os;
}

ComplexList& ComplexList::operator=(ComplexList& rightHand) {  //���� ������ �Լ� ��������    //�� ��������� �ȵǴ�??   //���� �����ڴ� ������ ��ȯ�� ���� �ʾƵ� �ȴ�.
	this->ListSize = rightHand.ListSize;
	delete[] this->cList;
	for (int i = 0; i < this->ListSize; i++) {
		this->cList[i] = rightHand.cList[i];  //Get(i)�� ��ü ����?
	}
	return *this;
}

ComplexList& ComplexList::operator+(ComplexList& rightHand) {  
	int size = this->ListSize + rightHand.ListSize; //������ ����.
	ComplexList cListcopy(size);
	for (int i = 0; i < this->ListSize; i++) {
		cListcopy.cList[i] = this->cList[i];
	}
	for (int i = (this->ListSize)+1; i < size; i++) {
		cListcopy.cList[i] = rightHand.cList[i];
	}
	delete[] this->cList;
	//�����ϱ�?

	return *this;
}

ComplexList& ComplexList::operator++() {

}

ComplexList& ComplexList::operator++(int notused) {
	ComplexList res = *this;
	
	for (int i = 0; i < this->ListSize; i++) {
		
	}

	return res;
}