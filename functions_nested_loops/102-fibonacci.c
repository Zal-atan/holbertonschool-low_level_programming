#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - This function calculates sum of all multiples of 3 to 5 under 1024
 *
 * Return: 0 is success
 *
 */

int main(void)
{
	int i;
	long int a, b, c;

	a = 1;
	b = a + 1;
	printf("%ld, ", a);
	for (i = 0; i < 49; i++)
	{
		printf("%ld", b);
		if (i < 48)
			printf(", ");
		c = (a + b);
		a = b;
		b = c;
	}
	printf("\n");


	return (0);
}
