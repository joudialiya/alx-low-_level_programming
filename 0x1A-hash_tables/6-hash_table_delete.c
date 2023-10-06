#include "hash_tables.h"

/**
 * hash_table_delete - free hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		hash_node_t *entry = ht->array[i];

		while (entry)
		{
			hash_node_t *next = entry->next;

			free(entry->key);
			free(entry->value);
			free(entry);
			entry = next;
		}
		++i;
	}
	free(ht->array);
	free(ht);
}

