#include "main.h"

/**
 * _strcat - cat two str
 * @dest: dest
 * @src: source
 *
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{

	while (*dest != '\0')
		++dest;

	while (*src != 0)
	{
		*dest = *src;
		++src;
		++dest;
	}

	*dest = 0;

	return (dest);
}
