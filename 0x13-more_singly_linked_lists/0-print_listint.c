#include "lists.h"

/**
 * print_listint - print
 * @h: head
 *
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	if (h->next)
		return (1 + print_listint(h->next));
	return (1);
}
