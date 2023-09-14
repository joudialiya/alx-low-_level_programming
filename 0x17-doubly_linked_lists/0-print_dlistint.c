#include "lists.h"

/**
 * print_dlistint - print a dlist
 * @h: head
 * Return: nbr of elm
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_dlistint(h->next));
}
