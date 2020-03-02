#include <iostream>
#include "Complex.h"
using namespace std;

void Complex::SetComplex(double a, double b)
{
	real = a;
	image = b;
}
double Complex::GetReal(void) const
{
	return real;
}
double Complex::GetImage(void) const
{
	return image;
}
void Complex::ShowComplex(void) const
{
	cout << real << "+" << image << "i" << endl;
}