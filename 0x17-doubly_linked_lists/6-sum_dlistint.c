#include "lists.h"

/**
 * sum_dlistint - sum the elements
 * @head: head of dlist
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	if (!head)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
