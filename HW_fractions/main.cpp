#include <iostream>
#include "fractions.h"


int main() {
	setlocale(LC_ALL, "Russian");

	Fractions num1(1, 2);
	Fractions num2(1, 2);

	std::cout << num1.getNumerator() << "/" << num1.getDenominator() << " * " << num2.getNumerator() << "/" << num2.getDenominator() << " = " << (num1 * num2) << std::endl;
	std::cout << num1.getNumerator() << "/" << num1.getDenominator() << " : " << num2.getNumerator() << "/" << num2.getDenominator() << " = " << (num1 / num2) << std::endl;
	std::cout << num1.getNumerator() << "/" << num1.getDenominator() << " + " << num2.getNumerator() << "/" << num2.getDenominator() << " = " << (num1 + num2) << std::endl;
	std::cout << num1.getNumerator() << "/" << num1.getDenominator() << " - " << num2.getNumerator() << "/" << num2.getDenominator() << " = " << (num1 - num2) << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	
	
	
	std::cout << "������� ��������� ������� �����: ";
	int numerator;
	std::cin >> numerator;
	num1.setNumerator(numerator);

	std::cout << "������� ����������� ������� �����: ";
	int denominator;
	std::cin >> denominator;
	num1.setDenominator(denominator);
	std::cout << "������ �����: " << num1.getNumerator() << "/" << num1.getDenominator() << std::endl;

	std::cout << "������� ��������� ������� �����: ";
	int numerator2;
	std::cin >> numerator2;
	num2.setNumerator(numerator2);

	std::cout << "������� ����������� ������� �����: ";
	int denominator2;
	std::cin >> denominator2;
	num2.setDenominator(denominator2);
	std::cout << "������ �����: " << num2.getNumerator() << "/" << num2.getDenominator() << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	std::cout << num1.getNumerator() << "/" << num1.getDenominator() << " * " << num2.getNumerator() << "/" << num2.getDenominator() << " = " << (num1 * num2) << std::endl;
	std::cout << num1.getNumerator() << "/" << num1.getDenominator() << " : " << num2.getNumerator() << "/" << num2.getDenominator() << " = " << (num1 / num2) << std::endl;
	std::cout << num1.getNumerator() << "/" << num1.getDenominator() << " + " << num2.getNumerator() << "/" << num2.getDenominator() << " = " << (num1 + num2) << std::endl;
	std::cout << num1.getNumerator() << "/" << num1.getDenominator() << " - " << num2.getNumerator() << "/" << num2.getDenominator() << " = " << (num1 - num2) << std::endl;
	std::cout << "-------------------------------------------" << std::endl;



}