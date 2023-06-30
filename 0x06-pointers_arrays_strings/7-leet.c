#include "main.h"

/**
 * leet - leet encoder
 * @str: string
 *
 * Return: the str
 */
char *leet(char *str)
{
	char *map = "a4e3o0t7l1";
	char *ptr = str;
	int i = 0;

	while (*ptr != 0)
	{
		i = 0;
		while (map[i] != 0)
		{
			if (*ptr == map[i] || *ptr == map[i] - 32)
			{
				*ptr = map[i + 1];
				break;
			}
			++i;
		}
		++ptr;
	}

	return (str);
}
