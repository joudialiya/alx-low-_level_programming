#include "main.h"

/**
 * _strncpy -  cpy str
 * @dest: dest
 * @src: source
 * @n: num bytes
 *
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;

	while (*src != 0 && i < n)
	{
		*dest = *src;
		++src;
		++dest;
		++i;
	}

	*dest = 0;

	return (dest);
}
