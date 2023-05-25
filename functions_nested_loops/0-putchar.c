#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *string = "_putchar";
	int i;

	for (i = 0 ; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');

	return (0);
}
