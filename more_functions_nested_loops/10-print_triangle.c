#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_triangle - prints square of length n
 *
 * @n: length and height of square
 *
 * Return: returns nothing
 *
 */

void print_triangle(int n)
{
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		k = (n - i + 1);
		for (j = 0; j < n; j++)
		{
			if (j < k)
				_putchar(' ');
			else
				_putchar('#');
		}
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');

}
