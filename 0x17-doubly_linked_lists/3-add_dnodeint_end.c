#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end of the list
 * @head: head
 * @n: data
 * Return: the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *current = NULL;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = node;
		node->prev = current;
	}
	return (node);
}
