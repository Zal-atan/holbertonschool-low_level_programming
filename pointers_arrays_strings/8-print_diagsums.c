#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_diagsums - prints the sums of two diagonals in a square
 *
 * @a: the start of the matrix
 *
 * @size: width of the matrix rows and columns
 *
 *
 */

void print_diagsums(int *a, int size)
{
	long int i, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < (size * size - 1))
			sum2 += *(a + i);
	}

	printf("%ld, %ld\n", sum1, sum2);
}
