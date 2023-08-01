#include "lists.h"
#define MAX 1024
/**
 * free_listint_safe - print
 * @h: head
 *
 * Return: size
 */
size_t free_listint_safe(listint_t **h)
{
	void *lookup[MAX];
	int ilookup = 0;
	size_t r = 0;
	listint_t *tmp = NULL;

	if (h == NULL)
		return (0);

	lookup[0] = NULL;
	while (*h && !_contain(lookup, (void *)(*h)))
	{
		lookup[ilookup] = (void *)(*h);
		++ilookup;
		lookup[ilookup] = NULL;
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		++r;
	}
	*h = NULL;
	return (r);
}
