#include "main.h"

/**
 * str_concat - Uses malloc to add str 2 to end of str 1
 *
 * @s1: first string to add to new string
 *
 * @s2: second string to add to new string
 *
 * Return: Returns pointer to the array, or NULL if it fails
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		len1 = 0;

	else
		len1 = strlen(s1);

	if (s2 == NULL)
		len2 = 0;

	else
		len2 = strlen(s2);

	ar = malloc(sizeof(*ar) * (len1 + len2) + 1);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ar[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		ar[i] = s2[j];

	return (ar);
}
