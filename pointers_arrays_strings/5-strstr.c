#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strstr - finds first occurrence of str 2 in str 1
 *
 * @haystack: string to search in
 *
 * @needle: string to search for
 *
 * Return: Returns pointer to where second str appears in str 1
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}

