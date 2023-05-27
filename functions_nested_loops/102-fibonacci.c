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
	int i, a, b, c;

	a = 1;
	b = a + 1;
	printf("%d, ", a);
	for (i = 0; i < 49; i++)
	{
		printf("%d, ", b);
		c = (a + b);
		a = b;
		b = c;
	}
	printf("\n");


	return (0);
}
