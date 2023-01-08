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

	
	
	
	std::cout << "¬ведите числитель первого числа: ";
	int numerator;
	std::cin >> numerator;
	num1.setNumerator(numerator);

	std::cout << "¬ведите знаменатель первого числа: ";
	int denominator;
	std::cin >> denominator;
	num1.setDenominator(denominator);
	std::cout << "ѕервое число: " << num1.getNumerator() << "/" << num1.getDenominator() << std::endl;

	std::cout << "¬ведите числитель второго числа: ";
	int numerator2;
	std::cin >> numerator2;
	num2.setNumerator(numerator2);

	std::cout << "¬ведите знаменатель второго числа: ";
	int denominator2;
	std::cin >> denominator2;
	num2.setDenominator(denominator2);
	std::cout << "¬торое число: " << num2.getNumerator() << "/" << num2.getDenominator() << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	std::cout << num1.getNumerator() << "/" << num1.getDenominator() << " * " << num2.getNumerator() << "/" << num2.getDenominator() << " = " << (num1 * num2) << std::endl;
	std::cout << num1.getNumerator() << "/" << num1.getDenominator() << " : " << num2.getNumerator() << "/" << num2.getDenominator() << " = " << (num1 / num2) << std::endl;
	std::cout << num1.getNumerator() << "/" << num1.getDenominator() << " + " << num2.getNumerator() << "/" << num2.getDenominator() << " = " << (num1 + num2) << std::endl;
	std::cout << num1.getNumerator() << "/" << num1.getDenominator() << " - " << num2.getNumerator() << "/" << num2.getDenominator() << " = " << (num1 - num2) << std::endl;
	std::cout << "-------------------------------------------" << std::endl;



}