#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the linked listint
 * @head: head of the listint
 * @n: new data
 *
 * Return: addr of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL;
	listint_t *end = NULL;

	if (!head)
		return (NULL);

	end = (*head);
	ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;

	if (end == NULL)
	{
		*head = ptr;
	}
	else
	{
		/* locate the tail */
		while (end->next != NULL)
			end = end->next;
		end->next = ptr;
	}

	return (ptr);
}
