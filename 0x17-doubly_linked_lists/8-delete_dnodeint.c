#include "lists.h"

/**
 * delete_dnodeint_at_index - delet a node at an index
 * @head: head
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		dlistint_t *next = NULL;

		if (*head)
			next = (*head)->next;
		if (next)
			next->prev = NULL;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	while (current && index > 0)
	{
		current = current->next;
		--index;
	}
	if (current)
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
		return (1);
	}
	return (-1);

}
