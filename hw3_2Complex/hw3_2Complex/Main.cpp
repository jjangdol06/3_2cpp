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
	//ComplexList c1() *�Լ� ȣ�⹮�̶� �򰥸���.

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
	//Set���� ���� �����ش�.

	//1�ܰ�
	ComplexList cl3(5);
	ComplexList cl4;  //10��¥��

	//2�ܰ�
	cout << cl3;

	//3�ܰ�
	cl4 = cl3;	//��� 5��¥��

	//4�ܰ�
	ComplexList cl5 = cl3;
	
	//5�ܰ�
	cl4 = cl3 + cl5;  //c3�� 10��¥���� �̾���

	//6�ܰ�_��� ��Ҹ� 1�� ����
	cl4 = cl3++;
	cl5 = ++cl3;

	//7�ܰ�
	if (cl3 == cl4) cout << "����";

	//8�ܰ�
	cl3[0] = cl4[1];


	//delete [] cl1.GetComplexList(); 
	//delete[] cl2.GetComplexList();

	return 0; //������ �� �Ҹ��� �������� ������ �Ķ��� ������ ��������. ��ȫ�� ������ ������ �ּҸ� �����ϰ� �ִ�.
}
/*
void InputComplex(Complex* p) 
{
	double a, b;
	cout << "���Ҽ��� �Ǽ��θ� �Է��Ͻÿ�: ";
	cin >> a;
	cout<< endl;
	cout << "���Ҽ��� ����θ� �Է��Ͻÿ�: ";
	cin >> b;
	cout << endl;

	(*p).SetComplex(a, b);
	
}
void InputComplex(Complex& r)
{

	double a, b;
	cout << "���Ҽ��� �Ǽ��θ� �Է��Ͻÿ�: ";
	cin >> a;
	cout << endl;
	cout << "���Ҽ��� ����θ� �Է��Ͻÿ�: ";
	cin >> b;
	cout << endl;

	r.SetComplex(a, b);
}
void AddComplex(Complex c1, Complex c2)
{
	double addReal, addImage;
	addReal = c1.GetReal() + c2.GetReal();
	addImage = c1.GetImage() + c2.GetImage();

	cout << "���Ҽ��� ���� " << addReal << "+" << addImage << "i �Դϴ�.";
}
Complex& InpAndRetCompelx(Complex& r)
{
	return r;
}
*/
