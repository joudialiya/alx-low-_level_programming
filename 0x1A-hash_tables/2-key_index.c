#include "hash_tables.h"

/**
 * key_index - get index based on djb2 hash function
 * @key: key
 * @size: size of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
