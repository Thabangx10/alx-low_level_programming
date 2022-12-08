#include "lists.h"

/**
 * print_dlistint - print out the data in nodes
 * @head: head
 * Return: the amount of nodes
 */
size_t print_dlistint(const dlistint *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h ->n);
		h = h->next;
		count++;
	}

	return (count);
}
