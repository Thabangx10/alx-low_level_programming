#include "lists.h"

/**
 * function - get the nth node in list
 * @head: head
 * @i: index wanted
 * Return: nth node (data)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}

	return (head);
}
