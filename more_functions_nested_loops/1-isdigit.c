#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _isdigit - Checks if thew character is a number
 *
 * @c: - the input letter or number
 *
 * Return: 1 if there character is lowercase, 0 otherwise
 */

int _isdigit(int c)
{
	int l = c;
	int i;
	int r = 0;

	for  (i = 48 ; i < 58; i++)
	{
		if (i == l)
		{
			r = 1;
		}
	}
	return (r);

}
