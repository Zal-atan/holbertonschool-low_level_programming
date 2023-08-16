#include "search_algos.h"

/**
 * binary_search - This functions searchs an array binarily for int(value)
 *
 * @array: pointer to the beginning of an integer array
 * @size: size of the array
 * @value: integer value to search for
 *
 * Return: returns index value is found at or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int start, finish, middle, i;

	start = 0;
	finish = size - 1;

	if (array == NULL)
		return (-1);
	while (start <= finish)
	{
		middle = (start + finish) / 2;
		printf("Searching in array: ");
		for (i = start; i <= finish; i++)
		{
			if (i == finish)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			start = middle + 1;
		if (array[middle] > value)
			finish = middle - 1;
	}

	return (-1);
}
