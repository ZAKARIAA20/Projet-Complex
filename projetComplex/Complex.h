#pragma once
class Complex
{
private:
	double re;
	double img;
public:
	Complex(double, double);
	Complex(const Complex&);
	Complex operator+(double);
	Complex operator+(int);
	Complex operator-(double);
	Complex operator-(int);
	Complex operator/(double);
	Complex operator/(int);
	Complex operator*(double);
	Complex operator+(Complex);
	Complex operator-(Complex);
	Complex operator/(Complex);
	Complex operator*(Complex);
	bool operator==(Complex);
	bool operator!=(Complex);
	bool operator<(Complex);
	bool operator>(Complex);

	void afficher() const;
	~Complex();


};

