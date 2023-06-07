#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * leet - Changes string to into 1337
 *
 * @s: string of characters to go through
 *
 * Return: changes a's to 4s, e's to 3s, o's to 0s, t's to 7s, l's to 1s
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char table[10] = {'a', '4', 'e', '3', 'o', '0', 't', '7', 'l', '1'};

	while (s[i])
	{
		for (j = 0; table[j]; j += 2)
		{
			if (s[i] == table[j] || s[i] == table[j] - 32)
				s[i] = table[j + 1];
		}
		i++;
	}

	return (s);


}
