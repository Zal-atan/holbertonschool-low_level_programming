#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strspn - Returns number of bytes in initial segment s
 *
 * @s: string input
 *
 * @accept: the letters accepted for initial segment
 *
 * Return: Returns number of bytes to find each letter
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}

