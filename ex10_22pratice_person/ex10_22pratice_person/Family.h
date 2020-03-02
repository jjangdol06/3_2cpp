#pragma once
#ifndef _FAMILY_H_
#define _FAMILY_H_
#include "Person.h"

class Family {
	Person* list[10];
	int n; //������ ��������
public:
	Family(Person& h, Person& w); //husband and wife
	~Family(); //Ŭ���� �ȿ� ������ ������ ���� �Ҵ��ϴ� ���� �Ͼ ��
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
