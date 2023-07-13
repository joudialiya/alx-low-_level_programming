#include "main.h"

/**
 * _calloc - allocat with ez
 * @nmemb: num of elements
 * @size: size of elm
 *
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = 0;
	unsigned int i = 0;

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);
	while (i < nmemb)
	{
		ptr[i] = 0;
		++i;
	}
	return (ptr);
}
