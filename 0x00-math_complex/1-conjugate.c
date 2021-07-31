#include "holberton.h"

/**
 * conjugate - returns the conjugate of a given complex number
 * @c: structure “complex”
 *
 * Return: c
 */

complex conjugate(complex c)
{
	c.im = -c.im;
	return (c);
}
