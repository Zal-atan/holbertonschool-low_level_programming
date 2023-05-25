#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_sign - Checks if the number is positive, negative or 0
 *
 * @n: - the input number
 *
 * Return: 1 if the number is positive, 0 if the number is 0
 * or -1 if the number is negative
 */

int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		r  = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}


	return (r);

}
