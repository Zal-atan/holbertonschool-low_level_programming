#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _memset - n bytes of the memory area pointed to by s with the constant b
 *
 * @n: number of bytes of data to change
 *
 * @s: pointer to location of array
 *
 * @b: what we are changing the data in the array to
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
