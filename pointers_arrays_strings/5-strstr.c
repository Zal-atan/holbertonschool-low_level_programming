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
 * @string to search for
 *
 * Return: Returns pointer to where second str appears in str 1
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *c;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				c = (haystack + i);
				for (; needle[j] != '\0'; j++, i++)
					if (haystack[i] != needle[j])
						k = 0;
					else if (haystack[i] == needle[j])
						k = 1;
				if (k == 0)
					break;
				else if (k == 1)
					return (c);
			}
		}
	}
	return (0);
}

