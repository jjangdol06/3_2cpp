#pragma once
#ifndef _PERSON_H_
#define _PERSON_H_
class Person {
	int age;

public:
	Person(int age=0);
	int GetAge();
};

inline Person::Person(int age) :age(age) {}
#endif
