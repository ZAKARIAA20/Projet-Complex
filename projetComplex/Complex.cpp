#include "Complex.h"
#include<iostream>
using namespace std;
Complex::Complex(double r, double im)
{
	this->re = r;
	this->img = im;

}
Complex::Complex(const Complex& C)
{
	this->re = C.re;
	this->img = C.img;
}
Complex Complex::operator+(double Z)
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + Z;
	res->img = this->img + 0.0;
	return *res;
}
Complex Complex::operator+(int Z)
{
	Complex* res = new Complex(0, 0);
	res->re = this->re + Z;
	res->img = this->img + 0;
	return *res;
}
Complex Complex::operator-(double M)
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - M;
	res->img = this->img - 0.0;
	return *res;
}
Complex Complex::operator-(int M)
{
	Complex* res = new Complex(0, 0);
	res->re = this->re - M;
	res->img = this->img - 0;
	return *res;
}
Complex Complex::operator/(double D)
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re / D;
	res->img = this->img /D;
	return *res;
	
}
Complex Complex::operator/(int D)
{
	Complex* res = new Complex(0, 0);
	res->re = this->re / D;
	res->img = this->img / D;
	return *res;
}
Complex Complex::operator*(double MU)
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re * MU;
	res->img = this->img * MU;
	return *res;
}
Complex Complex::operator+(Complex C)
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + C.re;
	res->img = this->img +C.img;

	return *res;
}
Complex Complex::operator-(Complex C)
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - C.re;
	res->img = this->img - C.img;
	return *res;
}
Complex Complex::operator/(Complex C)
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = (this->re * C.re + this->img * C.img) / (pow(C.re,2) +pow(C.img,2));
	res->img = (this->img* C.re- C.img*this->re) /( pow(C.re, 2) + pow(C.img, 2));
	return *res;
}
Complex Complex::operator*(Complex C)
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re * C.re - this->img*C.img;
	res->img = this->re * C.img + C.re * this->img;
	return *res;
}
bool Complex::operator==(Complex c)
{
	Complex* res = new Complex(0.0, 0.0);
	if (this->re == c.re && this->img == c.img) {
		return true;

	}
	else {

		return false;
	}
}
bool Complex::operator!=(Complex c)
{
	if (this->re != c.re || this->img != c.img) {
		return true;
	}
	else {
		return false;
	}
	
}
bool Complex::operator<(Complex c)
{
	float MC,Ms;
	MC = abs(pow(this->re, 2) + pow(this->img, 2));
	Ms= abs(pow(c.re, 2) + pow(c.img, 2));
	if (MC < Ms) {
		return true;
	}
	else {
		return false;
	}
}
bool Complex::operator>(Complex c)
{
	float MC, Ms;
	MC = abs(pow(this->re, 2) + pow(this->img, 2));
	Ms = abs(pow(c.re, 2) + pow(c.img, 2));
	if (MC > Ms) {
		return true;
	}
	else {
		return false;
	}
}

void Complex::afficher() const
{
	cout << this->re << "+i" << this->img << endl;
}
Complex::~Complex()
{
}
;
//==; !=;<=;>=;<;>
//association entre des classes