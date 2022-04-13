#include "Complex.h"
#include<cmath>
complex ComplexCreate(double re, double im)
{
	complex c1;
	c1.re = re;
	c1.im = im;
	return c1;
};
complex ComplexAddition(complex c1, complex c2) 
{
	complex c3;
	c3.re = c1.re + c2.re;
	c3.im = c1.im + c2.im;
	return c3;
};
complex ComplexMultiplication(complex c1, complex c2) 
{
	complex c3;
	c3.re = (c1.re * c2.re - c1.im * c2.im);
	c3.im = (c1.re * c2.im + c1.im * c2.re);
	return c3;
};
complex ComplexSubstraction(complex c1, complex c2) 
{
	complex c3;
	c3.re = c1.re - c2.re;
	c3.im = c1.im - c2.im;
	return c3;
};
complex ComplexDivision(complex c1, complex c2) 
{
	complex c3;
	c3.re = (c1.re * c2.re + c1.im * c2.re) / ((c2.re * c2.re) + (c2.im * c2.im));
	c3.im = (c2.re * c1.im - c1.re * c2.im) / ((c2.re * c2.re) + (c2.im * c2.im));
	return c3;
};