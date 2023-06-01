#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strcpy - Copies a string from one variable to another
 *
 * @dest: final location
 *
 * @src: string to copy
 *
 * Return: none
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++
	}

	return (dest);
}
