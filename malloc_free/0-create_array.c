#include "main.h"

/**
 * create_array - creates an array in memory using input length and charcter
 *
 * @size: size of the array
 *
 * @c: char to input into the array
 *
 * Return: Returns pointer to the array, or NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(*ar) * size);
	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
