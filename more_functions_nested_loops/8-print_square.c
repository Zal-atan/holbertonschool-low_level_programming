#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_square - prints square of length n
 *
 * @n: length and height of square
 *
 * Return: returns nothing
 *
 */

void print_square(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');

}
