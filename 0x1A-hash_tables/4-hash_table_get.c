#include "hash_tables.h"

/**
 * hash_table_get -  get a value based on key
 * @ht: hash table
 * @key: the key
 * Return: NULL or value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *entry = NULL;

	entry = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (entry)
	{
		if (strcop(entry->key, key) == 0)
			return (strdup(entry->value));
		entry = entry->next;
	}
	return (NULL);
}
