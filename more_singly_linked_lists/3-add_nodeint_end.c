#include "lists.h"

/**
 * add_nodeint_end - Adds new integer node to end of list
 *
 * @head: current head of list
 *
 * @n: integer to add to the list
 *
 * Return: Returns the number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addNewEnd;
	listint_t *pos = *head;

	addNewEnd = malloc(sizeof(listint_t));

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
	}

	return (addNewEnd);
}
