#ifndef fraction_H
#define fraction_H
#pragma once
class Fraction
{
	int numtor;
	int dentor;

public:

	Fraction(int numerator = 0, int denominator = 1);
	~Fraction();

	Fraction addfraction(Fraction add);
	Fraction subfraction(Fraction subtr);
	Fraction mulfunction(Fraction mult);
	Fraction divfraction(Fraction divid);

	void Fraction::lowterms();
	void print();
	Fraction getfrac();// read in from keyboard
}


#endif


