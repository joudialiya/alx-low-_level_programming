#include "lists.h"
#define MAX 1024
/**
 * find_listint_loop - floyd cycle finding
 * @h: head
 *
 * Return: ptr
 */
listint_t *find_listint_loop(listint_t *h)
{
	listint_t *slow = NULL;
	listint_t *fast = NULL;

	if (h == NULL)
		return (NULL);
	slow = h;
	fast = h;
	while (fast && slow && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			fast = h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
