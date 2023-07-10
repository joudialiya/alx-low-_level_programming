#include "main.h"
/**
 * _strlen - len of a str
 * @s: str
 *
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * _strcat - cat 2 str [no check]
 * @s1: str 1
 * @s2: str 2
 */
void _strcat(char *s1, char *s2)
{
	while (*s1 != 0)
	{
		++s1;
	}
	while (*s2 != 0)
	{
		*s1 = *s2;
		++s1;
		++s2;
	}
	*s1 = 0;
}
/**
 * argstostr - args to str
 * @ac: args count
 * @av: argv vector
 *
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	char *str = 0;
	int size = 0;
	int i = 0;

	if (ac == 0 || av == NULL)
		return (0);

	while (i < ac)
	{
		size += _strlen(av[i]);
		++i;
	}

	str = malloc(sizeof(char) * (size + 1 + ac));

	if (str == 0)
		return (0);

	i = 0;

	while (i < ac)
	{
		_strcat(str, av[i]);
		_strcat(str, '\n');
		++i;
	}

	return (str);
}
