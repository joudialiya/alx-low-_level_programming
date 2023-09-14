#include "lists.h"
/**
 * get_dnodeint_at_index - return a node at a given index
 * @head: head of the dlist
 * @index: index
 * Return: the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index > 0)
	{
		head = head->next;
		--index;
	}
	return (head);
}
