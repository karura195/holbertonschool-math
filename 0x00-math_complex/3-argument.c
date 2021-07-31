#include "holberton.h"

/**
 * argument - returns the argument of a given complex number
 * @c: structure “complex”
 *
 * Return: arg
 */

double argument(complex c)
{
	double arg = atan(c.im / c.re);

	return (arg);
}
