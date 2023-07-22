#include "lists.h"

/**
 * dlistint_len - Returns number of nodes
 *
 * @h: input to header of the list
 *
 * Return: Returns the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	unsigned int i = 0;

	while (temp)
	{
		temp = (*temp).next;
		i++;
	}
	return (i);
}
