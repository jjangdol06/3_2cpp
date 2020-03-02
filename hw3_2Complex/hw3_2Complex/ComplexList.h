#pragma once
#ifndef _COMPLEX_LIST_H_
#define _COMPLEX_LIST_H_
#include <iostream>
#include "Complex.h"

class ComplexList {
	Complex* cList;
	int ListSize;

public:
	//ComplexList(); 
	ComplexList(int n);
	ComplexList(const ComplexList& target);
	~ComplexList();

	//void Init(int n);

	Complex* GetComplexList();
	bool Set(int n, double r, double i);
	Complex& Get(int n);
	int Length();

	ComplexList& operator+(ComplexList& rightHand);
	friend ostream& operator<<(ostream& os, const ComplexList& cl);
	ComplexList& operator=(ComplexList& rightHand);
	ComplexList& operator++(int notused);
	ComplexList& operator++();
	ComplexList(const ComplexList&); //4단계를 위한 복사 생성자
};

//inline ComplexList::ComplexList() :ComplexList(10){}
inline ComplexList::ComplexList(int n=10) {
	cList = new Complex[n];
	ListSize = n;
}

inline ComplexList::ComplexList(const ComplexList& target){
	cList = target.cList;
	ListSize = target.ListSize;
}

inline ComplexList::~ComplexList()
{
	delete[] cList;
}
#endif
