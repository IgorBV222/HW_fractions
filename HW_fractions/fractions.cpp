#include "fractions.h"



Fractions::Fractions(int numerator, int denominator) : _numerator(numerator), _denominator(denominator)
{
	//std::cout << "Fractions() constructor" << std::endl;
}

int Fractions::getNumerator()
{
	return _numerator;
}

void Fractions::setNumerator(int numerator)
{
	_numerator = numerator;
}

int Fractions::getDenominator()
{
	return _denominator;
}

void Fractions::setDenominator(int denominator)
{
	_denominator = denominator;
}
 

//ÎØÈÁÊÀ!!!!
/*Fractions Fractions::operator*(Fractions& other) {
		return double ((_numerator * other._numerator) / (_denominator * other._denominator));
	}
}*/


Fractions::~Fractions()
{
	//std::cout << "Fractions() destructor" << std::endl;
}
