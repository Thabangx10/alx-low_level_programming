#include "lists.h"

/**
 * function - deletes node at index
 * @head: **head of node
 * @index: index to delete
 * Return: update the list with deleted node, (1) on success, Fail(-1)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head) ->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp ->next != NULL)
	{
		if ( count == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}

	return (-1);
}
