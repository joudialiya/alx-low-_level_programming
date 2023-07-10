#include "main.h"
/**
 * len - length of a string
 * @s: str
 *
 * Return: size
 */
int len(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + len(s + 1));
}


/**
 * str_concat - concat 2 strings
 * @s1: str 1
 * @s2: str 2
 *
 * Return: new ptr;
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int len = 0;
	int i = 0;

	len += (s1 == NULL) ? 0 : len(s1);
	len += (s2 == NULL) ? 0 : len(s2);

	ptr == malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	if (s1 != NULL)
		while (*s1 != 0)
		{
			ptr[i] = *s1;
			++s1;
			++i;
		}
	if (s2 != NULL)
		while (*s2 != 0)
		{
			ptr[i] = *s2;
			++s2;
			++i;
		}

	ptr[i] = '\0';

	return (pre);
}
