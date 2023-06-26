#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocations array of nmemb elements of size bytes
 *
 * @nmemb: number of elements
 *
 * @size: size of each element
 *
 * Return: Returns pointer to the array, or NULL if it fails
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pnt;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pnt = malloc(nmemb * size);

	if (pnt == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		pnt[i] = 0;
	return (pnt);
}
