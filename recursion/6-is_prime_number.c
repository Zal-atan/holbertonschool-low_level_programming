#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * find_prime - finds if a number is prime
 *
 * @n: number to chexck if prime
 *
 * @i: number to check inside of n
 *
 * Return: Returns 0
 *
 */

int find_prime(int n, int i)
{
	if (i < 2)
		return (1);

	if (n % i == 0)
		return (0);

	return (find_prime(n, i - 1));
}

/**
 * is_prime_number - determines whether the number is prime
 *
 * @n: number to check for prime
 *
 * Return: Returns 0 if not prime, returns 1 if prime
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (find_prime(n, (n / 2)));
}
