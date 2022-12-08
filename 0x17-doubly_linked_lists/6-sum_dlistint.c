#include "lists.h"

/**
 * function: returns the sum of all node data within the list
 * @head: head
 * Return: sum of all nodes
 */
int sum_dlistint(dlistint_t head)
{
	size_t res = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
