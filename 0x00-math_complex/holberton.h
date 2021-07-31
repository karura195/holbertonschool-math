#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct complex - elements of a complex number
 * @re: real part of the complex number
 * @im: imaginary part of the complex number
 *
 * Description: complex number formed of re + im i
 */

struct complex
{
  double re;
  double im;
};
typedef struct complex complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg (double m, double arg, complex *c3);

#endif /* HOLBERTON_H */
