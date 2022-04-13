#ifndef _COMPLEX_H_
#define _COMPLEX_H_
#endif
#include<iostream>
#include <cmath>
class complex 
{
public:
	double re, im;
};
complex ComplexCreate(double re,double im);
complex ComplexAddition(complex c1, complex c2);
complex ComplexMultiplication(complex c1, complex c2);
complex ComplexSubstraction(complex c1, complex c2);
complex ComplexDivision(complex c1, complex c2);

