#include "lists.h"

/**
 * listint_len - Returns number of elements in the list
 *
 * @h: input list to be printed
 *
 * Return: Returns the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned int i = 0;

	while (temp)
	{
		temp = (*temp).next;
		i++;
	}
	return (i);
}
