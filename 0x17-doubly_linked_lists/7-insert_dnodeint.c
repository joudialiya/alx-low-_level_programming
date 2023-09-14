#include "lists.h"

/**
 * insert_dnodeint_at_index - insert at a index
 * @h: head
 * @idx: index
 * @n: data
 * Return: the node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
			return (add_dnodeint(h, n));
	else
	{
		current = *h;
		while (current && idx > 0)
		{
			current = current->next;
			--idx;
		}
		if (idx == 0)
		{
			if (current)
			{
				dlistint_t *node = add_dnodeint(&current, n);

				if (node)
				{
						current->prev->next = node;
				}
				return (node);
			}
			else
			{
				return (add_dnodeint_end(h, n));
			}
		}
		else
			return (NULL);
	}
}
