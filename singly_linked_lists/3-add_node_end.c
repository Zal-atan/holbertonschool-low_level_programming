#include "lists.h"

/**
 * add_node - Adds new node to beggining of list
 *
 * @head: current head of list
 *
 * @str: string to add to list
 *
 * Return: Returns the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *addNewEnd;
	list_t *pos = *head

	addNewEnd = malloc(sizeof(list_t));

	if (addNewEnd == NULL)
	{
		free(addNewEnd);
		return (NULL);
	}

	(*addNewEnd).str = strdup(str);
	(*addNewEnd).len = strlen(str);
	(*addNewEnd).next = NULL;

	if (*head == NULL)
		*head = addNewEnd;
	
	else
	{
		while (pos->next)
			pos = ((*pos).next)
		
		(*pos).next = addNewEnd;
	}


	return (addNewEnd);
}
