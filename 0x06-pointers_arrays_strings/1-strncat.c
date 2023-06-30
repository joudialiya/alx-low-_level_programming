#include "main.h"

/**
 * _strncat - cat two str
 * @dest: dest
 * @src: source
 * @n: num bytes
 *
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	int i = 0;

	while (*dest != '\0')
		++dest;

	while (*src != 0 && i < n)
	{
		*dest = *src;
		++src;
		++dest;
		++i;
	}

	*dest = 0;

	return (ptr);
}
