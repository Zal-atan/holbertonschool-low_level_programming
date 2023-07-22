#include "lists.h"

/**
 * add_dnodeint_end - Adds new integer node to end of list
 *
 * @head: current head of list
 *
 * @n: integer to add to the node
 *
 * Return: Returns the position of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *addNewEnd;
	dlistint_t *pos = *head;

	addNewEnd = malloc(sizeof(dlistint_t));

	if (addNewEnd == NULL)
	{
		free(addNewEnd);
		return (NULL);
	}

	(*addNewEnd).n = n;
	(*addNewEnd).next = NULL;

	if (*head == NULL)
		*head = addNewEnd;

	else
	{
		while (pos->next)
			pos = ((*pos).next);

		(*pos).next = addNewEnd;
		addNewEnd->prev = pos;
	}

	return (addNewEnd);
}
