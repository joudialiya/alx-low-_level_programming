#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	char *v;

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "a");
    hash_table_set(ht, "mentioner", "b");
	v = ht->array[key_index((const unsigned char *)"mentioner", 1024)]->next->value;
	printf("%s\n", v);
    return (EXIT_SUCCESS);
}
