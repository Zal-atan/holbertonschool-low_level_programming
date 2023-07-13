#include "lists.h"

/**
 * free_list - frees the memory from the list
 *
 * @head: current head of list
 */

void free_list(list_t *head)
{
	list_t *pos;

	while (head)
	{
		pos = head;
		head = pos->next;
		free(pos->str);
		free(pos);
	}
}
