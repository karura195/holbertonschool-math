#include "holberton.h"

/**
 * division - performs the division operation to complex numbers
 * @c1: first complex number
 * @c2: second complex number
 * @c3: division between c1 and c2
 *
 * Return: void
 */

void division(complex c1, complex c2, complex *c3)
{
	double sub = ((c2.re * c2.re) + (c2.im * c2.im));

	c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) / sub;
	c3->im = ((c1.im * c2.re) - (c1.re * c2.im)) / sub;
}
