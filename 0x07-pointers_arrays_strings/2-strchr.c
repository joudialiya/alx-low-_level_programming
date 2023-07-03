#include "main.h"

/**
 * _strchr - occurrence
 * @s: str
 * @c: char
 *
 * Return: ptr
 */

char *_strchr(char *s, char c)
{

	while (*s != 0)
	{
		if (*s == c)
			return (s);
		++s;
	}

	return (NULL);
}
