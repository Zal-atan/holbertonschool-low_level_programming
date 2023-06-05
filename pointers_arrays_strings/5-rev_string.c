#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/* more headers goes there */

/**
 * rev_string - reverse the string
 *
 * @str: string input
 *
 * Return: none
 */

void rev_string(char *str)
{
	int i;
	char temp;

	for (i = 0; i < _strlen(str) / 2; i++)
	{
		temp = str[i];
		str[i] = str[_strlen(str) - i - 1];
		str[_strlen(str) - i - 1] = temp;
	}

}
