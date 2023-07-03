#include "function_pointers.h"

/**
 * array_iterator - executes given function on each member of array
 *
 * @array: array of integers passed in
 *
 * @size: size of the array
 *
 * @action: pointer to function which executes on the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
