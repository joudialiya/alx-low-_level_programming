#include "lists.h"

/**
 * add_node_end - add a node at the end of the linked list
 * @head: head of the list
 * @str: new data
 *
 * Return: addr of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *end = NULL;

	if (!head)
		return (NULL);

	end = (*head);
	ptr = malloc(sizeof(list_t));

	if (!ptr)
		return (NULL);

	ptr->len = strlen(str);
	ptr->next = NULL;
	ptr->str = strdup(str);

	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
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
