#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _isupper - Checks if thew character is lowercase
 *
 * @c: - the input letter or number
 *
 * Return: 1 if there character is lowercase, 0 otherwise
 */

int _isupper(int c)
{
	int l = c;
	int i;
	int r = 0;

	for  (i = 65 ; i < 91; i++)
	{
		if (i == l)
		{
			r = 1;
		}
	}
	return (r);

}
