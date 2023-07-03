#include "main.h"

/**
 * _memcpy - mem cpy
 * @dest: dest
 * @src: src
 * @n: size
 *
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}

	return (dest);
}
