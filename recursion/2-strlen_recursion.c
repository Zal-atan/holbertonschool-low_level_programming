#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * _strlen_recursion - Finds the string length through recursion
 *
 * @s: character string to check length of
 *
 * Return: Returns length of the string
 *
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (i);

	i = _strlen_recursion(s + 1);
	return (i + 1);
}
