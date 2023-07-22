#include "lists.h"

/**
 * get_dnodeint_at_index - returns (n) value node[index] of listint_t
 *
 * @head: current head of list
 *
 * @index: position of node to return
 *
 * Return: Returns the node at position n
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (temp)
	{
		if (i == index)
			return (temp);
		temp = (*temp).next;
		i++;
	}

	return (NULL);
}
