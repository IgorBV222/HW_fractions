#pragma once
#include <iostream>


class Fractions
{
public:
	Fractions(int numerator, int denominator);
	
	int getNumerator();
	void setNumerator(int numerator);

	int getDenominator();
	void setDenominator(int denominator);

	~Fractions();

	//Деление
	double operator/(Fractions& other) {
		return double (_numerator * other._denominator) / (_denominator * other._numerator);
	}

	//Умножение
	double operator*(Fractions& other) {
		return double(_numerator * other._numerator) / (_denominator * other._denominator);
	}
	
	//ОШИБКА!!!!
	//Fractions operator*(Fractions& other)


	//Сложение
	double operator+(Fractions& other) {
		return double ((_numerator * other._denominator) + (_denominator * other._numerator)) / (_denominator * other._denominator);
	}
	//Вычитание
	double operator-(Fractions& other) {
		return double ((_numerator * other._denominator) - (_denominator * other._numerator)) / (_denominator * other._denominator);
	}
	


private:
	
	int _numerator; // числитель
	int _denominator; // знаменатель
};

