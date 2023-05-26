#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_times_table - This function displays a multiplication table
 *
 * @i: integer between 0 - 15 in for which times table is made
 *
 * Return: Returns the value of the last digit
 *
 */

void print_times_table(int i)
{
	int x, y, prod;

	if (i >= 0 && i < 15)
	{
		for (x = 0; x <= i; x++)
		{
			for (y = 0 ; y <= i; y++)
			{
				prod = (x * y);
				if (y == 0)
					;
				else if (prod < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (prod >= 100)
				{
					_putchar('0' + (prod / 100));
					prod = (prod % 100);
					_putchar('0' + (prod / 10));
				}
				else if (prod >= 10)
				{
					_putchar(' ');
					_putchar('0' + (prod / 10));
				}
				_putchar((prod % 10) + '0');
				if (y < i)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	}
}
