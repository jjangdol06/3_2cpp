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
	delete[] cstr;
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

bool String::operator==(const char* cs) const
{
	int len = strlen(cs);
	if (len != this->m_nLen)
		return false;
	for (int i = 0; i< len+1; i++) {
		if (this->m_pStr[i] != cs[i])
			return false;
	}
	return true;
}

bool String::operator==(const String& s) const
{
	if (s.m_nLen != this->m_nLen) 
		return false;
	for (int i = 0; i<s.m_nLen+1; i++) {
		if (this->m_pStr[i] != s.m_pStr[i]) 
			return false;
	}
	return true;
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