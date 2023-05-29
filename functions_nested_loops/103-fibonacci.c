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
	long int a, b, sum;

	a = 1;
	b = a + 1;
	sum = 0;
	for (; b < 4000000;)
	{
		if ((b % 2) == 0)
			sum = (sum + b);
		b = (a + b);
		a = (b - a);
	}
	printf("%ld\n", sum);


	return (0);
}
