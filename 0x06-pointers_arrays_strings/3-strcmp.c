#include "main.h"

/**
 * _strcmp - cmp str
 * @s1: str 1
 * @s2: str 2
 *
 * Return: -1, 0, 1
 */
int _strcmp(char *s1, char *s1)
{


	while (*s1 != 0 && *s2 != 0 && *s1 == *s2)
	{
		++s1;
		++s2;
	}

	if (*s1 > *s2)
		return (1);
	if (*s1 < *s2)
		return (-1);

	return (0);
}
