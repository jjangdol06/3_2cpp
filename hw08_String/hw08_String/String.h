#pragma once
#ifndef _STRING_H_
#define _STRING_H_

class String {
	int m_nLen;
	char* m_pStr;
public:
	String();
	String(const char cstr[]);
	~String();
	String(const String& s);

	char Get(int n);
	friend std::ostream& operator<<(std::ostream& os, String& s);
	int length();
	String operator+(String& rightS);
	String& operator=(String& rightS);
	bool operator==(const char* cs) const;
	bool operator==(const String& s) const;
	char& operator[](int i);
};
#endif // !_STRING_H_
