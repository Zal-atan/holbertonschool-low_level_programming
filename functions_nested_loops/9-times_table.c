#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * times_table - This function displays a multiplication table
 *
 *
 *
 * Return: Returns the value of the last digit
 *
 */

void times_table(void)
{
	int x, y, prod;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0 ; y <= 9; y++)
		{
			prod = (x * y);
			if (y == 0)
				;
			else if (prod < 10)
			{
				_putchar(' ');
			}
			else if (prod >= 10)
			{
				_putchar('0' + (prod / 10));
			}
			_putchar((prod % 10) + '0');
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');


		}
	}


}
