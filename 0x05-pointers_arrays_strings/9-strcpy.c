#include "main.h"

/**
 * _strcpy - cpy a str
 * @dest: destination
 * @src: source
 *
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_p = dest;
	char *src_p = src;

	while (*src_p != '\0')
	{
		*dest_p = *src_p;
		++dest_p;
		++src_p;
	}

	*dest_p = *src_p;

	return (dest);
}
