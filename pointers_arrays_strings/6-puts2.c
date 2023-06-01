#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _puts2 - Prints the length of the string, but only every other letter
 *
 * @str: string input
 *
 * Return: none
 */

void _puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		if (i == 0 || i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
