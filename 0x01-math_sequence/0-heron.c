#include "heron.h"

/**
 * heron - return the Heron sequence until having convergence
 * with an error less or equal to 0.0000001
 * @p: number whose square we need to converge
 * @x0: first integer of the sequence
 *
 * Return: the Heron sequence
 */

t_cell *heron(double p, double x0)
{
	t_cell *node, *new;
	double xn = (x0 + (p / x0)) / 2;

	node = malloc(sizeof(t_cell));
	new = malloc(sizeof(t_cell));
	if (new == NULL || node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	if (x0 == 1)
	{
		new->elt = x0;
		new->next = NULL;
	}
	while (x0 - xn >= 0.0000001 || x0 == 1)
	{
		node = new;
		new = malloc(sizeof(t_cell));
		if (new == NULL)
		{
			printf("Error\n");
			return (NULL);
		}
		new->elt = xn;
		new->next = node;
		x0 = xn;
		xn = (x0 + (p / x0)) / 2;
	}
	node = new;

	return (node);
}
