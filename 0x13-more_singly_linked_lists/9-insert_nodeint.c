#include "lists.h"

/**
 * insert_nodeint_at_index - add
 * @head: head of the list
 * @idx: index
 * @n: data
 *
 * Return: addr of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL;
	listint_t *curr = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	curr = *head;
	/* Meaning that the list is empty */
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else
	{
		/* Meaning thet the list has some elements */
		while (i != idx - 1 && curr != NULL)
		{
			curr = curr->next;
			++i;
		}
		/**
		* meaning that we are at the end of the list
		* the index exide the list
		*/
		if (curr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		ptr->next = curr->next;
		curr->next = ptr;
	}
	return (ptr);
}
