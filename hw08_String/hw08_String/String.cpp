#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstring>
#include "String.h"
using namespace std; 

String::String():String(""){}

String::String(const char cstr[])
{
	m_nLen = strlen(cstr);
	m_pStr = new char[m_nLen + 1];
	for (int i = 0; i < m_nLen+1; i++) {
		m_pStr[i] = cstr[i];
	}
}

String::~String()
{
	delete[] m_pStr;
}

String::String(const String& s)
{
	this->m_nLen = s.m_nLen;
	delete[] this->m_pStr;
	char* copyC = new char[s.m_nLen + 1];
	strcpy(copyC, s.m_pStr);
	this->m_pStr = copyC;
}

char String::Get(int n) 
{
	return *(m_pStr + n);
}

int String::length() 
{
	return m_nLen;
}

String String::operator+(String& rightS)
{
	String s;

	int size = this->m_nLen + rightS.m_nLen;
	char* cListcopy = new char[size + 1];
	strcpy(cListcopy, this->m_pStr);
	strcat(cListcopy, rightS.m_pStr);
	s.m_nLen = size;
	s.m_pStr = cListcopy;

	return s;
}

bool String::operator==(const char* cs) const
{
	if (strlen(cs) != this->m_nLen)
		return false;
	for (int i = 0; i<strlen(cs); i++) {
		if (this->m_pStr[i] != cs[i])
			return false;
	}
	return true;
}

bool String::operator==(const String& s) const
{
	if (s.m_nLen != this->m_nLen) 
		return false;
	for (int i = 0; i<s.m_nLen; i++) {
		if (this->m_pStr[i] != s.m_pStr[i]) 
			return false;
	}
	return true;
}

char& String::operator[](int i)
{
	if (i < 0 || i > this->m_nLen - 1) {
		cout << "out of bound" << endl;
		exit(-1);
	}
	else
		return this->m_pStr[i];
}

String& String::operator=(String& rightS)
{
	this->m_nLen = rightS.m_nLen;
	delete[] this->m_pStr;
	char* cListcopy = new char[this->m_nLen + 1];
	strcpy(cListcopy, rightS.m_pStr);
	this->m_pStr = cListcopy;
	return *this;
}

std::ostream& operator<<(std::ostream& os, String& s)
{
	for (int i = 0; i < s.length(); i++) {
		std::cout << s.Get(i);
	}
	return os;
}
