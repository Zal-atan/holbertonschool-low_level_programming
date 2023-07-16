#include "lists.h"

/**
 * add_nodeint - Adds a node at the head
 *
 * @head: current head of list
 *
 * @n: integer to add to the list
 *
 * Return: Returns the number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addNew;

	addNew = malloc(sizeof(listint_t));

	if (addNew == NULL)
	{
		free(addNew);
		return (NULL);
	}

	(*addNew).n = n;
	(*addNew).next = *head;
	*head = addNew;

	return (addNew);
}
