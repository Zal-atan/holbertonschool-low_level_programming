#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _abs - Writes the absolute value of the given input
 *
 * @n: - the input number
 *
 * Return: Returns the absolute value of the input
 *
 */

int _abs(int n)
{
	int r;

	if (n >= 0)
	{
		r = n;
	}
	else if (n < 0)
	{
		r = (n * -1);
	}

	return (r);

}
