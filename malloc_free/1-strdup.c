#include "main.h"

/**
 * _strdup - duplicates a str into malloc memory
 *
 * @str: string to duplicate
 *
 * Return: Returns pointer to the array, or NULL if it fails
 *
 */

char *_strdup(char *str)
{
	char *ar;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1

	ar = malloc(sizeof(*ar) * len);

	if (ar == NULL)
		return (NULL);

	while (i < len)
	{
		ar[i] = str[i];
		i++;
	}

	return (ar);
}
