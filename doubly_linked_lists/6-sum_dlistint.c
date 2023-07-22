#include "lists.h"

/**
 * sum_dlistint - returns sum of the (n) of each node
 *
 * @head: current head of list
 *
 * Return: Returns sum of the values in the nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (!(head))
		return (0);

	while (temp)
	{
		sum += (*temp).n;
		temp = (*temp).next;
	}

	return (sum);
}
