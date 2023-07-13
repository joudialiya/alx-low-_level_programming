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
 * string_nconcat - concat 2 strings
 * @s1: str 1
 * @s2: str 2
 * @n: bytes
 *
 * Return: new ptr;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	int size = 0;
	int i = 0;

	size += (s1 == NULL) ? 0 : len(s1);
	size += n;

	ptr = malloc(sizeof(char) * (size + 1));

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
		while (*s2 != 0 && n > 0)
		{
			ptr[i] = *s2;
			++s2;
			++i;
			--n;
		}

	ptr[i] = '\0';

	return (ptr);
}
