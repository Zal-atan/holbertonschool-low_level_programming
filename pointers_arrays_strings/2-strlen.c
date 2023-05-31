#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strlen - Prints the length of the string
 *
 * @s: string input
 *
 * Return: length of string int
 */

int _strlen(char *s)
{
	int i, j;

	j = 0;
	for (i = 0; *s[i] != '\0' ; i++)
		j++;
	return (j);
}
