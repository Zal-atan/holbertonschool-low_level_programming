#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _memcpy - n bytes of the memory area pointed to by dest with the info src
 *
 * @n: number of bytes of data to change
 *
 * @dest: pointer to location of array
 *
 * @src: what we are changing the data in the array to
 *
 * Return: pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
