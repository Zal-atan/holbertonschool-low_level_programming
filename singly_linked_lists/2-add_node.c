#include "lists.h"

/**
 * add_node - Prints all elements of list_t
 *
 * @head: current head of list
 *
 * @str: string to add to list
 *
 * Return: Returns the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	int newLen;
	list_t *addNew;

	addNew = malloc(sizeof(list_t));

	if (addNew == NULL)
	{
		free(addNew);
		return (NULL);
	}

	(*addNew).str = strdup(str);
	(*addNew).len = strlen(str);
	(*addNew).next = *head;
	*head = addNew;

	return (addNew);
}
