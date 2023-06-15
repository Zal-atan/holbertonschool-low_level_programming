#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _pow_recursion - Raised x to the power of y
 *
 * @x: integer to be raised to the power of
 *
 * @y: power to which x is raised
 *
 * Return: Returns x to the power of y
 *
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	if (y == 1)
		return (x);

	i = (x * _pow_recursion(x, y - 1));
	return (i);
}
