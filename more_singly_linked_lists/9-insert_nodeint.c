#include "lists.h"

/**
 * insert_nodeint_at_index - adds a node with value (n) at index (idx)
 *
 * @head: current head of list
 *
 * @idx: position of node to add new node
 *
 * @n: number to add to n at new node
 *
 * Return: Returns the node at position n
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int i = 0;
	listint_t *addNew = malloc(sizeof(listint_t));

	if (!addNew)
		return (NULL);

	(*addNew).n = n;

	if (idx == 0)
	{
		(*addNew).next = temp;
		*head = addNew;
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
	(*temp).next = addNew;

	return (addNew);
}
