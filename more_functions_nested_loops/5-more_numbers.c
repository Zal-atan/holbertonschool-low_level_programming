#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_most_numbers - prints numbers 0 to 9, except 2 and 4
 *
 * Return: returns nothing
 *
 */

void print_most_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (i > 10)
				_putchar('0' + 1);
			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}

}
