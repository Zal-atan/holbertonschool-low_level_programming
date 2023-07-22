#include "lists.h"

/**
 * print_dlistint - Prints all elements of input list
 *
 * @h: input list to be printed
 *
 * Return: Returns the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	unsigned int i = 0;

	while (temp)
	{
		printf("%d\n", (*temp).n);
		temp = (*temp).next;
		i++;
	}
	return (i);
}
