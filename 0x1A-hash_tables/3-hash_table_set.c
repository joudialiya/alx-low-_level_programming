#include "hash_tables.h"

/**
 * hash_table_set - set entry
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **entry = NULL;
	hash_node_t *element = NULL;
	hash_node_t *current = NULL;

	if (!ht || !key || strlen(key) == 0)
		return (0);

	entry = &(ht->array[key_index((const unsigned char *)key, ht->size)]);
	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (0);
	element->key = NULL, element->value = NULL, element->next = NULL;
	element->key = strdup(key);
	if (value)
		element->value = strdup(value);
	if (!key || !value)
	{
		free(element->key), free(element->value), free(element);
		return (0);
	}
	if (!(*entry))
	{
		(*entry) = element;
		return (1);
	}
	current = *entry;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(element->key), free(element->value), free(element);
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	element->next = (*entry);
	(*entry) = element;
	return (1);
}
