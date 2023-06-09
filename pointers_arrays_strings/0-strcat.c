#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strcat - Copies a string from one variable to another
 *
 * @dest: final location
 *
 * @src: string to copy
 *
 * Return: none
 */

char *_strcat(char *dest, char *src)
{
	int i_d = 0, index = 0;

	while (dest[i_d])
		i_d++;

	while (src[index])
	{
		dest[i_d++] = src[index++];
	}

	return (dest);
}
