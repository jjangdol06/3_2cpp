#pragma once
#ifndef _COMPLEX_H
#define _COMPLEX_H
class Complex {
	double real, image;

public:
	Complex();
	Complex(double a, double b);
	Complex(const Complex& target);
	~Complex();

	void Init(double a, double b);
	void SetComplex(double a, double b);
	double GetReal(void) const;
	double GetImage(void) const;
	void ShowComplex(void) const;

};

inline Complex::Complex()
{
	Init(0, 0);
}
inline Complex::Complex(double a, double b)
{
	Init(a, b);
}
inline Complex::Complex(const Complex& target) {
	this->real = target.real;
	this->image = target.image;
	cout << "Complex 객체 복사 생성" << endl; //실제 복사하는 일을 안하기 때문에 소멸자에 쓰레기 값(복사하는 활동 해줘야함)
}
inline Complex::~Complex()
{
}
inline void Complex::Init(double a, double b)
{
	SetComplex(a, b);

	real = GetReal();
	image = GetImage();
}

#endif //_COMPLEX_H