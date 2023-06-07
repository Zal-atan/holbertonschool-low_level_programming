#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * string_toupper - makes lowercase chars in string uppercase
 *
 * @s: string of characters to go through
 *
 * Return: Returns the string all uppercase
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}

	return (s);

}
