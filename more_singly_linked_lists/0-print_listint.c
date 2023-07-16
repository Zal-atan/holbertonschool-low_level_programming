#include "lists.h"

/**
 * print_listint - Prints all elements of input list
 *
 * @h: input list to be printed
 *
 * Return: Returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned int i = 0;

	while (temp)
	{
		printf("[%d]\n", (*temp).n)
		temp = (*temp).next;
		i++;
	}
	return (i);

}
