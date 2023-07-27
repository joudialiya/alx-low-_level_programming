#include "lists.h"

/**
 * print_list - print
 * @h: head
 *
 * Return: size
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	printf("[%d] %s\n", (!h->str) ? 0 : h->len, (!h->str) ? "(nil)" : h->str);
	if (h->next)
		return (1 + print_list(h->next));
	return (1);
}
