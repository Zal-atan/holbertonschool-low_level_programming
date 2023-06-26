#include "main.h"

/**
 * malloc_checked - allocates memory and points to location
 *
 * @b: bytes to allocate
 *
 * Return: Returns pointer to the to memory block, or 98 if fails
 *
 */

void *malloc_checked(unsigned int b)
{
	void *pnt = malloc(b);

	if (pnt == NULL)
	{
		free(pnt);
		exit(98);
	}

	return (pnt);
}
