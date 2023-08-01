#include "lists.h"

/**
 * listint_len - len of the list
 * @h : head
 *
 * Return: size
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next)
		return (1 + listint_len(h->next));
	return (1);
}
