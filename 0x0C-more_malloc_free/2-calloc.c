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
	char *ptr = 0;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		*(ptr + i) = 0;
		++i;
	}
	return (ptr);
}
