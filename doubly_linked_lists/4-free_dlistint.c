#include "lists.h"

/**
 * free_dlistint - frees the memory from the list
 *
 * @head: current head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pos;

	while (head)
	{
		pos = head;
		head = pos->next;
		free(pos);
	}
}
