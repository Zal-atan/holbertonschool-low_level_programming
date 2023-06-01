#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
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
	int i, j;
	char temp[] = "";

	j = 0;
	for (i = 0; str[i] != '\0' ; i++)
		j++;

	j = (j - 1);
	i = 0;
	for (; j >= 0; j--)
	{
		temp[i] = str[j];
		i++;
	}
	printf("%s", temp);
}
