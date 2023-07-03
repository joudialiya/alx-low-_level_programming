#include "main.h"

/**
 * _memset - set memory
 * @s: buffer
 * @c: the byte
 * @n: buffer's size
 *
 * Return: s
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = c;
		++i;
	}

	return (s);
}
