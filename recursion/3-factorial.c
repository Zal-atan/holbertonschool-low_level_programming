#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * factorial - prints the factorial of the input number n
 *
 * @n: input integer
 *
 * Return: Returns factorial value
 *
 */

int factorial(int n)
{
	int i;

	if (n == 1 || n == 0)
		return (1);

	if (n < 0)
		return (-1);

	i = (n * factorial(n - 1));
	return (i);
}
