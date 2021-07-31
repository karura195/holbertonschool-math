#include "holberton.h"
#include <math.h>

/**
 * modulus - returns the modulus of a given complex number
 * @c: structure “complex”
 *
 * Return: mod
 */

double modulus(complex c)
{
	double mod = sqrt((c.re * c.re) + (c.im * c.im));

	return (mod);
}
