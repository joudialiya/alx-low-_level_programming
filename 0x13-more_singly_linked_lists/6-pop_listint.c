#include "lists.h"

/**
 * pop_listint - pop the first element
 * @head: rhe head of the sigly linked list
 *
 * Return: the data or 0
 */

int pop_listint(listint_t **head)
{

	int r = 0;
	listint_t old_head = NULL;

	if (head == NULL || *head == NULL)
		return (0);

	old_head = (*head);
	(*head) = (*head)->next;
	r = old_head->n;
	free(old_head);

	return (r);
}
