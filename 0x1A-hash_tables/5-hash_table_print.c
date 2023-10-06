#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int isFirst = 1;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		const hash_node_t *entry = ht->array[i];

		while (entry)
		{
			if (!isFirst)
				printf(", ");
			else
				isFirst = 0;

			printf("'%s': '%s'", entry->key, entry->value);
			entry = entry->next;
		}
		++i;
	}
	printf("}\n");
}
