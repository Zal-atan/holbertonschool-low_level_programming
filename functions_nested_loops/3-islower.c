#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _islower - Checks if thew character is lowercase
 *
 * @c: - the input letter or number
 *
 * Return: 1 if there character is lowercase, 0 otherwise
 */

int _islower(int c)
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
	return (r);

}
