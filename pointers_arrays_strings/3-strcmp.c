#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strcmp - Compares values of strings to see which is greater
 *
 * @s1: first string to compare
 *
 * @s2: second string to compare
 *
 * Return: value of difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
