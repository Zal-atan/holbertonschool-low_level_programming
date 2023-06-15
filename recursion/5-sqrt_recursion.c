#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * find_sqrt - finds if there is a sqrt
 *
 * @n: number to find square root
 *
 * @i: number to check square roots
 *
 * Return: Returns square root or -1 if nonexistent
 *
 */

int find_sqrt(int n, long int i)
{
	if ((i * i) == n)
		return (i);

	if ((i * i) > n)
		return (-1);

	i = find_sqrt(n, i += 1);

	return (i);
}

/**
 * _sqrt_recursion - Find if there is a natural square root of input
 *
 * @n: number to check for natural square root
 *
 * Return: Returns natural square root or -1 if none
 *
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);

	i = find_sqrt(n, i);


	return (i);
}
