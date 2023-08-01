#include "lists.h"

/**
 * sum_listint - sum the datas
 * @head: head
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
