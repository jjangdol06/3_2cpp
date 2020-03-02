#include <iostream>
#include "ComplexList.h"
#include "Complex.h"
using namespace std;

bool ComplexList::Set(int n, double r, double i) {
	//인덱스가 유효한지 확인
	if (n<0 || n>ListSize) {
		//오류출력
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

ComplexList& ComplexList::operator=(ComplexList& rightHand) {  //대입 연산자 함수 다중정의    //왜 복사생성자 안되니??   //복사 생성자는 해제와 반환을 하지 않아도 된다.
	this->ListSize = rightHand.ListSize;
	delete[] this->cList;
	for (int i = 0; i < this->ListSize; i++) {
		this->cList[i] = rightHand.cList[i];  //Get(i)로 대체 가능?
	}
	return *this;
}

ComplexList& ComplexList::operator+(ComplexList& rightHand) {  
	int size = this->ListSize + rightHand.ListSize; //갯수를 센다.
	ComplexList cListcopy(size);
	for (int i = 0; i < this->ListSize; i++) {
		cListcopy.cList[i] = this->cList[i];
	}
	for (int i = (this->ListSize)+1; i < size; i++) {
		cListcopy.cList[i] = rightHand.cList[i];
	}
	delete[] this->cList;
	//연결하기?

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