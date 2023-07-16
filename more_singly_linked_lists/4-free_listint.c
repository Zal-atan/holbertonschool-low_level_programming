#include "lists.h"

/**
 * free_listint - frees the memory from the list
 *
 * @head: current head of list
 */

void free_listint(listint_t *head)
{
	listint_t *pos;

	while (head)
	{
		pos = head;
		head = pos->next;
		free(pos->n);
		free(pos);
	}
}
