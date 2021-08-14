#include "fibonacci.h"

/**
 * Fibonnaci - returns the Fibonacci sequence until having a geometric behavior
 *
 * Return: Fibonacci sequence
 */

t_cell *Fibonnaci()
{
	t_cell *node, *new;
	int x1 = 1, x2 = 1;
	int xn = x1 + x2;

	node = malloc(sizeof(t_cell));
	new = malloc(sizeof(t_cell));
	if (new == NULL || node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
		new->elt = x1;
		new->next = NULL;
		node = new;
		new = malloc(sizeof(t_cell));
		if (new == NULL)
		{
		printf("Error\n");
		return (NULL);
		}
		new->elt = x2;
		new->next = node;
		node = new;
	while (xn <= 6765)
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
		x1 = x2;
		x2 = xn;
		xn = x1 + x2;
	}
	node = new;
	return (node);
}

/**
 * gold_number - Gives the gold number of the Fibonacci sequence
 * @head: list with the sequence
 *
 * Return: the gold number
 */

double gold_number(t_cell *head)
{
	if (head == NULL)
	{
		return (0);
	}
	double goldfib = (double)(head->elt) / (double)(head->next->elt);

	return (goldfib);
}
