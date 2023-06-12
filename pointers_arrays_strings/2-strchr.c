#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strchr - returns a pointer to first occurence of charc c in str
 *
 * @s: string input
 *
 * @c: character looking for in string
 *
 * Return: pointer to first character c in string s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}

