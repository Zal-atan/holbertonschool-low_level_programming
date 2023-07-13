#include "lists.h"

/**
 * list_len - Prints all elements of list_t
 *
 * @h: input list to be printed
 *
 * Return: Returns the number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	unsigned int i = 0;

	while (temp)
	{
		i++;
		temp = (*temp).next;
	}
	return (i);
}
