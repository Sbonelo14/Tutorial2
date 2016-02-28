#include <iostream>
#include <iostream>

using namespace std;
#include "fraction.h"

int main()
{
	Fraction fract1, fract2, fract3, fract4, fract5, fract6;

	cout << "Result displayed will be the sum,difference,product or quotient\n " << endl;
	fract1 = getfrac();
	fract2 = getfrac();
	fract3 = fract1.addfrac(fract2); // two fractions are added
	fract3.print();
	fract4 = fract1.subfraction(fract2);// two fractions are subtracted
	fract4.print();
	fract5 = fract1.malfraction(fract2); //two fractions are multiplied
	fract6 = fract1.divfraction(fract2); //two fractions are divided
	fract6.lowterms(); // reduces results
	system("pause");//hold on result simulation
	return 0; // program executes
}
