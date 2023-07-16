#include "lists.h"

/**
 * print_list - Prints all elements of list_t
 *
 * @h: input list to be printed
 *
 * Return: Returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned int i = 0;

	if ((*temp).str == NULL)
	{
		printf("[0] (nil)\n");
		temp = (*temp).next;
		i++;
	}

	while (temp)
	{
		printf("[%d] %s\n", (*temp).n, (*temp).str)
		temp = (*temp).next;
		i++;
	}
	return (i);

}
