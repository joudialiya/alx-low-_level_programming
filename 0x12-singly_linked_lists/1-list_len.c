#include "lists.h"

/**
 * list_len - len of the list
 * @h : head
 *
 * Return: size
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next)
		return (1 + list_len(h->next));
	return (1);
}
