#include "main.h"

/**
 * _strdup - dup a str
 * @str: string
 *
 * Return: new str
 */
char *_strdup(char *str)
{
	int size = 0;
	int i = 0;
	char *ptr = 0;


	if (str == 0)
		return (0);

	while (str[size] != 0)
	{
		++size;
	}

	ptr = malloc(sizeof(char) * (size + 1));

	if (ptr == 0)
		return (0);

	while (str[i] != 0)
	{
		ptr[i] == str[i];
		++i;
	}
	ptr[i] = 0;

	return (0);
}
