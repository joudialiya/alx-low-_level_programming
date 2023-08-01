#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: head of the list
 *
 * Return: new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);
	next = *head;
	while (next != NULL)
	{
		*head = next;
		next = (*head)->next;
		(*head)->next = tmp;
		tmp = (*head);
	}
	return (*head);
}
