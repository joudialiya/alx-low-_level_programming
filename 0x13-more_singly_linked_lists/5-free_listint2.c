#include "lists.h"


/**
 * _free_handle - free handle
 * @head: head
 */
void _free_handle(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		_free_handle(head->next);
	free(head);
}
/**
 * free_listint2 - free a list
 * @head: head of the listint
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	_free_handle(*head);
	*head = NULL;
}
