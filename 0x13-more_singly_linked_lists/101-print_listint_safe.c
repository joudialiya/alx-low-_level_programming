#include "lists.h"
#define MAX 1024
/**
 * _contain - if ptr exist in the lookup table
 * @lookup: table
 * @ptr: the value
 *
 * Return: 1 or 0
 */
int _contain(void **lookup, void *ptr)
{
	while (*lookup)
	{
		if (*lookup == ptr)
			return (1);
		++lookup;
	}

	return (0);
}
/**
 * print_listint_safe - print
 * @h: head
 *
 * Return: size
 */
size_t print_listint_safe(const listint_t *h)
{
	void *lookup[MAX];
	int ilookup = 0;
	size_t r = 0;
	const listint_t *ptr = NULL;

	lookup[0] = NULL;
	ptr = h;
	while (ptr && !_contain(lookup, (void *)ptr))
	{
		lookup[ilookup] = (void *)ptr;
		++ilookup;
		lookup[ilookup] = NULL;
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		++r;
	}
	if (ptr)
		printf("-> [%p] %d\n", (void *)ptr, ptr->n);


	return (r);
}
