#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at position (index)
 *
 * @head: current head of list
 *
 * @index: position of node to delete
 *
 * Return: Returns 1 on success or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int i = 0;
	listint_t *delete_node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (**head).next;
		free(temp);
		return (1);
	}

	while (i < (index - 1))
	{
		if ((*temp).next == NULL)
			return (-1);

		temp = (*temp).next;
		i++;
	}

	delete_node = temp->next;
	(*temp).next = (*delete_node).next;
	free(delete_node);

	return (1);
}
