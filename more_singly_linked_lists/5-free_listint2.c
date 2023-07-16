#include "lists.h"
#include "4-free_listint.c"

/**
 * free_listint2 - frees the memory from the lists
 *
 * @head: current head of list
 */

void free_listint2(listint_t **head)
{

	if (!head)
	{
		return;
	}

	free_listint(*head);
	*head = NULL;
}
