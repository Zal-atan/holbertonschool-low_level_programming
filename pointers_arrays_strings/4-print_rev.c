#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_rev - Prints the length of the string
 *
 * @str: string input
 *
 * Return: none
 */

void print_rev(char *str)
{
	int i, j;

	j = 0;
	for (i = 0; str[i] != '\0' ; i++)
		j++;

	j = (j - 1);
	for (i = j; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
