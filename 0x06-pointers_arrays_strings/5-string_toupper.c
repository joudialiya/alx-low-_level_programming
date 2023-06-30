#include "main.h"

/**
 * string_toupper - to upper
 * @str: string
 *
 * Return: the str
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != 0)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr = *ptr - 32;
		++ptr;
	}

	return (str);
}
