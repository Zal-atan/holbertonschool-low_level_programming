#include "lists.h"

/**
 * free_listint2 - frees the memory from the list
 *
 * @head: current head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *pos;

	if (!head)
	{
		return;
	}

	freelist_int(head);
	*head = NULL;
}
