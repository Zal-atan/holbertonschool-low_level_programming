#include "search_algos.h"

/**
 * linear_search - This functions searchs an array linearly for int(value)
 *
 * @array: pointer to the beginning of an integer array
 * @size: size of the array
 * @value: integer value to search for
 *
 * Return: returns index value is found at or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
