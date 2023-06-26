#include "main.h"

/**
 * string_nconcat - puts first n chars of string s2 at end of string s1
 *
 * @s1: first string to add to new string
 *
 * @s2: second string to add to new string
 *
 * @n: number of chars of s2 to add to s1
 *
 * Return: Returns pointer to the array, or NULL if it fails
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	int i = 0, len1 = 0;
	unsigned int j = 0, len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;

	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;

		if (len2 > n)
			len2 = n;
	}

	ar = malloc(sizeof(*ar) * (len1 + n) + 1);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ar[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		ar[i] = s2[j];

	return (ar);
}
