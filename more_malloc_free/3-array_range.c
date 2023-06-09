#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array from min to max
 *
 * @min: min number of the array
 *
 * @max: max number of the array
 *
 * Return: Returns pointer to the array, or NULL if it fails
 *
 */

int *array_range(int min, int max)
{
	int *ar;
	int i = 0;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (ar == NULL)
		return (NULL);

	while (min <= max)
	{
		ar[i] = min;
		i++;
		min++;
	}

	return (ar);
}
