//#include<iostream>
//#include "ComplexNumbers.h"
//using namespace std;
//ComplexNumbers::ComplexNumbers()
//{
//	real = 0;
//	imag = 0;
//}
//ComplexNumbers::ComplexNumbers(int r, int im):real(0),imag(0)
//{
//	if (r >= 0)
//	{
//		real = r;
//	}
//	imag = im;
//}
//void ComplexNumbers::setRealPart(int r)
//{
//	if (r >= 0)
//	{
//		real = r;
//	}
//}
//int ComplexNumbers::getRealPart()
//{
//	return real;
//}
//int ComplexNumbers::getImaginaryPart()
//{
//	return imag;
//}
//void ComplexNumbers::Display()
//{
//	if (imag >= 0)
//	{
//		cout << "Complex number: " << real << "+" << imag << "i" << "\n";
//	}
//	if (imag < 0)
//	{
//		cout << "Complex number: " << real << imag << "i" << "\n";
//	}
//}
//void ComplexNumbers::input()
//{
//	cout << "Enter the real part of the complex number ";
//	cin >> real;
//	cout << "Enter the imaginary part of the complex number ";
//	cin >> imag;
//}
//ComplexNumbers ComplexNumbers::operator +(const ComplexNumbers& obj)
//{
//	ComplexNumbers additionResult;
//	additionResult.real = real + obj.real;
//	additionResult.imag = imag + obj.imag;
//	return additionResult;
//}
//ComplexNumbers ComplexNumbers::operator -(const ComplexNumbers& obj)
//{
//	ComplexNumbers subtractionResult;
//	subtractionResult.real = real - obj.real;
//	subtractionResult.imag = imag - obj.imag;
//	return subtractionResult;
//}
//ComplexNumbers ComplexNumbers::operator *(const ComplexNumbers& obj)
//{
//	ComplexNumbers multiplication;
//	multiplication.real = (real * obj.real) + ((imag * obj.imag)*-1);
//	multiplication.imag = (real * obj.imag) + (imag * obj.real);
//	return multiplication;
//}
//ComplexNumbers ComplexNumbers::operator /(const ComplexNumbers& obj)
//{
//	ComplexNumbers division;
//	ComplexNumbers numerator;
//	numerator.real = real;
//	numerator.imag = imag;
//	ComplexNumbers denConjugate;
//	denConjugate.real = obj.real;
//	denConjugate.imag = obj.imag;
//	int den = (obj.real * obj.real) + (obj.imag * obj.imag);//because for denominator the conjugate part will become positive
//	denConjugate.imag = (denConjugate.imag * -1);
//	ComplexNumbers num = numerator * denConjugate;
//	division.real = num.real / den;
//	division.imag = num.imag / den;
//	return division;
//}