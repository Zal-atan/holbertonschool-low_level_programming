#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_to_98 - prints each number from given number to 98
 *
 * @n: - the first input number
 *
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}

	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
				n--;
		}
		printf("%d\n", n);
	}

	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
				n++;
		}
		printf("%d\n", n);
	}


}
