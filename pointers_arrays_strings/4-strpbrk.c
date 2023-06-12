#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strspn - returns pointer to first letter occuring from accept in string
 *
 * @s: string input
 *
 * @accept: the letters accepted for finding pointer
 *
 * Return: Returns pointer to where first letter from accept appearcs in s
 */

char *_strpbrk(char *s, char *accept);
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}

