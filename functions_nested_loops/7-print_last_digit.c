#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_last_digit - prints the value of the last digit
 *
 * @n: - the input number
 *
 * Return: Returns the value of the last digit
 *
 */

int print_last_digit(int n)
{
	int f;
	int r;

	f = (n % 10);
	if (f >= 0)
	{
		_putchar(f + 48);
		r = f;
	}
	else if (f < 0)
	{
		_putchar(-f + 48);
		r = -f;
	}
	return (r);

}
