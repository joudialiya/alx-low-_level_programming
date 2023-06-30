#include "main.h"

/**
 * _strncpy -  cpy str
 * @dest: dest
 * @src: source
 * @n: num bytes
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*src != 0 && i < n)
	{
		*dest = *src;
		++src;
		++dest;
		++i;
	}
	if (*src == 0)
	{
		while (*dest != 0)
		{
			*dest = 0;
			++dest;
		}
	}

	return (ptr);
}
