#include "lists.h"

/**
 * add_node - add a node to the lisked list
 * @head: ptr to ptr struct
 * @str: new data
 *
 * Return: ptr of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));

	if (!ptr)
		return (NULL);

	ptr->len = strlen(str);
	ptr->str = strdup(str);

	if (!str)
	{
		free(ptr);
		return (NULL);
	}
	ptr->next = (*head);
	*head = ptr;
	return (ptr);
}
