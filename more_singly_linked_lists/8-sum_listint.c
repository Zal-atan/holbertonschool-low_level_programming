#include "lists.h"

/**
 * sum_listin - returns sum of the (n) of each node
 *
 * @head: current head of list
 *
 * Return: Returns sum of the values in the nodes
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
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
