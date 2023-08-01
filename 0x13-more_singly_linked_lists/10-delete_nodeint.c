#include "lists.h"

/**
 * delete_nodeint_at_index - add
 * @head: head of the list
 * @idx: index
 *
 * Return: addr of the new node or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *curr = NULL;
	listint_t *tmp = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	curr = *head;
	/* Meaning that the list is empty */
	if (curr == NULL)
		return (-1);
	if (idx == 0)
	{
		curr = *head;
		*head = curr->next;
		free(curr);
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
		if (curr == NULL || curr->next == NULL)
			return (-1);

		tmp = curr->next;
		curr->next = tmp->next;
		free(tmp);
	}
	return (1);
}
