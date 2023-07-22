#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node with value (n) at index (idx)
 *
 * @h: current head of list
 *
 * @idx: position of node to add new node
 *
 * @n: number to add to n at new node
 *
 * Return: Returns the node at position n
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int i = 0;
	dlistint_t *addNew;

	if (!addNew)
		return (NULL);


	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (i < (idx - 1))
	{
		if (temp == NULL)
			return (NULL);
		temp = (*temp).next;
		i++;
	}

	if ((*temp).next == NULL)
		return (add_dnodeint_end(h, n));

	addNew = malloc(sizeof(dlistint_t));

	(*addNew).n = n;
	(*addNew).next = (*temp).next;
	(*addNew).prev = temp;
	(*temp).next->prev = addNew;
	(*temp).next = addNew;

	return (addNew);
}
