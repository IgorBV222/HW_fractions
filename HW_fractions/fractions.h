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

	//�������
	double operator/(Fractions& other) {
		return double (_numerator * other._denominator) / (_denominator * other._numerator);
	}

	//���������
	double operator*(Fractions& other) {
		return double(_numerator * other._numerator) / (_denominator * other._denominator);
	}
	
	//������!!!!
	//Fractions operator*(Fractions& other)


	//��������
	double operator+(Fractions& other) {
		return double ((_numerator * other._denominator) + (_denominator * other._numerator)) / (_denominator * other._denominator);
	}
	//���������
	double operator-(Fractions& other) {
		return double ((_numerator * other._denominator) - (_denominator * other._numerator)) / (_denominator * other._denominator);
	}
	


private:
	
	int _numerator; // ���������
	int _denominator; // �����������
};

