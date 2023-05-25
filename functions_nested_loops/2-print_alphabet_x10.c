#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * print_alphabet_x10 - Prints the alphabet in lower case 10 x
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0 ; i < 10; i++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

}
