#pragma once
#ifndef _FAMILY_H_
#define _FAMILY_H_
#include "Person.h"

class Family {
	Person* list[10];
	int n; //가족의 구성원수
public:
	Family(Person& h, Person& w); //husband and wife
	~Family(); //클래스 안에 포인터 변수와 동적 할당하는 일이 일어날 때
	void AddChild();
};

inline Family::Family(Person& h, Person& w) {
	list[0] = new Person(h.GetAge());
	list[1] = new Person(w.GetAge());
	n = 2;
}
inline Family::~Family() {
	for (int i = 0; i < n; i++) {
		delete list[i];
	}
}
inline void Family::AddChild() {
	list[n] = new Person();
	n++;
}
#endif
