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
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum = (sum + i);
		}
	}
	printf("%d\n", sum);
	return (0);
}
