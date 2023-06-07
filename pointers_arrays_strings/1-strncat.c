#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strncat - Copies n bytes of string (src) to the end of s
 *
 * @dest: final location
 *
 * @src: string to copy
 *
 * @n: number of times to iterate through strin (src)
 *
 * Return: none
 */

char *_strncat(char *dest, char *src, int n)
{
	int i_d = 0, index = 0;

	while (dest[i_d])
		i_d++;

	while (src[index] && index < n)
	{
		dest[i_d++] = src[index++];
	}

	return (dest);
}
