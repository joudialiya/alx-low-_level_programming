#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: head of the list
 * @index: index
 *
 * Return: the node or null;
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (index < 0)
		return (NULL);
	if (index == 0)
		return (head);
	if (head == NULL)
		return (NULL);

	return (get_nodeint_at_index(head->next, index - 1));

}
