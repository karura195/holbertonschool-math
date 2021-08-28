#include "rectangle.h"

/**
 * rectangle_method - Rectangle Method used to calculate an integral
 * @a: beginning
 * @b: limit
 * @steps: number of repetitions
 *
 * Return: the integral
 */

double rectangle_method(double a, double b, int steps)
{
	int i;
	double width, sum;

	width = (b - a) / steps;
	sum = 0.0;

	for (i = 1; i <= steps; i++)
	{
		sum += ((1 / (1 + (width * width))) * atan(a - 1)) * width * -1;
	}
	return (sum);
}
