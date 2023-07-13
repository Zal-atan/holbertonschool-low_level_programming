#include "main.h"

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

/**
 * binary_to_uint - converts binary to decimal
 *
 * @b: string of numbers
 *
 * Return: return an unsigned decimal based integer
 */

unsigned int binary_to_uint(const char *b)
{
	int sum = 0;
	int i;

	if (b == NULL)
		return (0);

	i = (strlen(b) - 1);
	while (*b)
	{
		if (*b == '1')
			sum += _pow_recursion(2, i);
		else if (*b != '0')
			return (0);

		b++, i--;
	}

	return (sum);
}
