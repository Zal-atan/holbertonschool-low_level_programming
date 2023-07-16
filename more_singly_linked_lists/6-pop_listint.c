#include "lists.h"

/**
 * pop_listint - Removes the node at the head and returns the data
 *
 * @head: current head of list
 *
 * Return: Returns the data from the head node(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (!(*head))
		return (0);

	data = (*temp).n;

	*head = (**head).next;

	free(temp);

	return (data);
}
