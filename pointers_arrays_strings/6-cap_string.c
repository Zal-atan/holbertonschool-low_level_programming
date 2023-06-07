#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * cap_string - Makes first letter of each word uppercase
 *
 * @s: string of characters to go through
 *
 * Return: Returns the string all uppercase
 */

char *cap_string(char *s)
{
	int i = 0, x = 0;

	while (s[i])
	{
		if (x == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
			x = 1;
		}

		if (s[i] < 65 || (s[i] > 90 && s[i] < 97) || s[i] > 122)
			x = 0;

		if ((s[i] > 64 && s[i] < 91) || (s[i] > 47 && s[i] < 58))
			x = 1;

		i++;
	}

	return (s);

}
