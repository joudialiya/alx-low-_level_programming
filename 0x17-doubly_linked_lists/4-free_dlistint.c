#include "lists.h"

/**
 * free_dlistint -  free a dlist
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free(head);
	free_dlistint_t(head->next);
}
