#include "main.h"

/**
 * _realloc - realloc
 * @ptr: ptr
 * @old_size: old size
 * @new_size: new size
 *
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = 0;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (!p)
		return (NULL);

	while (i < old_size)
	{
		*(p + i) = *((char *)ptr + i);
		++i;
	}

	free(ptr);
	return (p);
}
