#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _isalpha - Checks if the character is a letter, upper or lower case
 *
 * @c: - the input letter or number
 *
 * Return: 1 if there character is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	int l = c;
	int i;
	int r = 0;

	for  (i = 97 ; i < 123; i++)
	{
		if (i == l)
		{
			r = 1;
		}
	}
	for (i = 65; i < 91; i++)
	{
		if (i == l)
		{
			r = 1;
		}
	}
	return (r);

}
