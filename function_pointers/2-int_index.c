#include "function_pointers.h"

/**
 * int_index - searches for total number of specific integers in an array
 *
 * @array: array of integers input into the function
 *
 * @size: number of elements in the input array
 *
 * @cmp: pointer to function which will compare numbers
 *
 * Return: returns number of matching elements
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (0);
}
