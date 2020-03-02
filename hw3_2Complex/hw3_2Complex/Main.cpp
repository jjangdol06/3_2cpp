#include <iostream>
#include "Complex.h"
#include "ComplexList.h"
using namespace std;
/*
void InputComplex(Complex* p);
void InputComplex(Complex& r);
void AddComplex(Complex c1, Complex c2);
Complex& InpAndRetCompelx(Complex& r);*/

int main()
{
	ComplexList cl1;
	ComplexList cl2(5);
	//ComplexList c1() *함수 호출문이랑 헷갈린다.

	double a = 1, b=1;

	for (int i = 0; i < cl1.Length(); i++) {
		cl1.Set(i, a, a);
		a++;
	}

	for (int i = 0; i < cl2.Length(); i++) {
		cl2.Set(i, b, b);
		b++;
	}

	for (int i = 0; i < cl1.Length(); i++) {
		cl1.Get(i).ShowComplex();
	}
	for (int i = 0; i < cl2.Length(); i++) {
		cl2.Get(i).ShowComplex();
	}
	//Set으로 값을 정해준다.

	//1단계
	ComplexList cl3(5);
	ComplexList cl4;  //10개짜리

	//2단계
	cout << cl3;

	//3단계
	cl4 = cl3;	//모두 5개짜리

	//4단계
	ComplexList cl5 = cl3;
	
	//5단계
	cl4 = cl3 + cl5;  //c3는 10개짜리로 이어짐

	//6단계_모든 요소를 1씩 증가
	cl4 = cl3++;
	cl5 = ++cl3;

	//7단계
	if (cl3 == cl4) cout << "같다";

	//8단계
	cl3[0] = cl4[1];


	//delete [] cl1.GetComplexList(); 
	//delete[] cl2.GetComplexList();

	return 0; //리턴할 때 소멸을 시켜주지 않으면 파란색 영역만 없어진다. 분홍색 영역은 여전히 주소를 참조하고 있다.
}
/*
void InputComplex(Complex* p) 
{
	double a, b;
	cout << "복소수의 실수부를 입력하시오: ";
	cin >> a;
	cout<< endl;
	cout << "복소수의 허수부를 입력하시오: ";
	cin >> b;
	cout << endl;

	(*p).SetComplex(a, b);
	
}
void InputComplex(Complex& r)
{

	double a, b;
	cout << "복소수의 실수부를 입력하시오: ";
	cin >> a;
	cout << endl;
	cout << "복소수의 허수부를 입력하시오: ";
	cin >> b;
	cout << endl;

	r.SetComplex(a, b);
}
void AddComplex(Complex c1, Complex c2)
{
	double addReal, addImage;
	addReal = c1.GetReal() + c2.GetReal();
	addImage = c1.GetImage() + c2.GetImage();

	cout << "복소수의 합은 " << addReal << "+" << addImage << "i 입니다.";
}
Complex& InpAndRetCompelx(Complex& r)
{
	return r;
}
*/
