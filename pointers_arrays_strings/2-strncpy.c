#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strncpy - Copies n bytes of string (src) to the dest
 *
 * @dest: final location
 *
 * @src: string to copy
 *
 * @n: number of times to iterate through strin (src)
 *
 * Return: none
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index_d = 0, index = 0;

	while (src[index] && index < n)
	{
		dest[index_d++] = src[index++];
	}

	return (dest);
}
