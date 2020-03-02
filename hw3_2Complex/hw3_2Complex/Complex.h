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
	cout << "Complex ��ü ���� ����" << endl; //���� �����ϴ� ���� ���ϱ� ������ �Ҹ��ڿ� ������ ��(�����ϴ� Ȱ�� �������)
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