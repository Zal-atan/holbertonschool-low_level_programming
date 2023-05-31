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
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			;
		else
			_putchar(i + '0');
	}
	_putchar('\n');

}
