#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head of node
 * Return: a free list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node = NULL;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
