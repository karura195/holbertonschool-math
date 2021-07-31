#include "holberton.h"

/**
 * complex_from_mod_arg - update the real and the imaginary
 * parts of a complex number given its modulus and arguments
 * @m: modulus
 * @arg: argument
 * @c3: complex number
 *
 * Return: void
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	double a = m * (cos(arg));
	double b = m * (sin(arg));

	c3->re = a;
	c3->im = b;
}
