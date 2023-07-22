#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node with value (n) at index (idx)
 *
 * @head: current head of list
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
	dlistint_t *addNew = malloc(sizeof(dlistint_t));

	if (!addNew)
		return (NULL);

	(*addNew).n = n;

	if (idx == 0)
	{
		(*addNew).next = temp;
		*h = addNew;
		return (addNew);
	}

	while (i < (idx - 1))
	{
		if (temp == NULL || (*temp).next == NULL)
			return (NULL);

		temp = (*temp).next;
		i++;
	}

	(*addNew).next = (*temp).next;
	(*addNew).prev = temp;
	(*temp).next->prev = addNew;
	(*temp).next = addNew;

	return (addNew);
}
