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
	int index = 0, len_src = 0;

	while (src[len_src])
		len_src++;

	for (;src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = len_src; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
