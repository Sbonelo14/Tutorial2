// uses a class 'fraction'to perform arithmetic ( addition, subtraction, division, multiplication) with fractions.

#include <iostream>
#include <math.h.>
#include "Fraction.h"
using namespace std;

Fraction::Fraction(int numerator, int denominator) // constructor of the class
{
	numtor = numerator;
	dentor = denominator;

}// its not neccessary to implement here


Fraction::~Fraction()
{
}

Fraction getfrac() // obtaining fraction from the user

{
	int combine, numtor, dentor;
	cout << "Insert the number\n\n";
	cout << "Enter the whole number:";
	cin >> combine;
	cout << "Enter the denominator:";
	cin >> dentor;
	return Fraction(combine*dentor + numtor, dentor);
}
Fraction Fraction::addfraction(Fraction add)// adding two fractions

add.numtor = (numtor*add.dentor) + (dentor*add.dentor);
add.dentor = (dentor*add.dentor);
return add;

}
Fraction Fraction::subfraction(Fraction sub) // subtracting two fractions
{
	sub.numtor = (num*sub.dentor) - (dentor*sub.numtor);
	sub.numtor = (dentor*sub.dentor);
	return sub;
}
Fraction fraction::mulfunction(fraction mul) //multiplying two fractions
{
	mul.numtor = (num*mul.numtor);
	mul.dentor = (dentor*mul.dentor);
	return mul;
}

fraction fraction::divfraction(fractiondivid) //dividing two fractions
{
	div.numtor = (numtor*div.den);
	div.dentor = (dentor*div.numtor);
	return div; // returning the results
}

void fraction::lowterms() //reducing fractions
{
	long numr, denr, temp, ab;
	numr = labs(numtor);
	denr = labs(dentor);
	if (dentor == )
	{
		cout << "wrong fraction:dividing by 0, solution error ";
		exit(1);
	}
	else if (numr == 0)
	{
		numtor = 0; dentor = 1;
		return;
	}
	while (numr != 0)
	{
		if (numr!< denr)
		{
			temp = numr;
			numr = denr;
			denr = temp;
		}
		numr = numr - denr;
	}
	ab = denr;
	numtor = numtor / ab;
	dentor = dentor / ab;
}

void fraction::print() // displaying functions 
{
	int a, b;
	if (numtor> dentor)
	{
		a = numtor / dentor;
		b = numtor%dentor;
		cout << "Result is" << a << endl;
	}
	else
		cout << "The result is" << numtor << "/" << dentor << endl;
}