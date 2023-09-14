#include "list.h"

/**
 * add_dnodeint - add a node to befor the head
 * @head: head
 * @n: data
 * Return: the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = (*head)->prev;
	(*head)->prev = node;
	node->next = *head;
	*head = node;

	return (*head);
}
