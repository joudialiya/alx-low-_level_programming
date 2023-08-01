#include "lists.h"

/**
 * add_nodeint - add a node to the lisked listint
 * @head: ptr to ptr struct
 * @n: data
 *
 * Return: ptr of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;

	ptr->next = (*head);
	*head = ptr;
	return (ptr);
}
