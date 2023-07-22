#include "lists.h"

/**
 * add_dnodeint - Adds a node at the head
 *
 * @head: current head of list
 *
 * @n: integer to add to the node
 *
 * Return: Returns the number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addNew;

	addNew = malloc(sizeof(dlistint_t));

	if (addNew == NULL)
	{
		free(addNew);
		return (NULL);
	}

	(*addNew).n = n;
	(*addNew).next = *head;
	(*addNew).prev = NULL;
	if (*head != NULL)
		(**head).prev = addNew;
	*head = addNew;

	return (addNew);
}
