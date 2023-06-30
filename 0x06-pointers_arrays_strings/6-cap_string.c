#include "main.h"


/**
 * contain - contain a char
 * @str: str
 * @c: char
 *
 * Return: 0, 1
 */
int contain(char *str, int c)
{
	while (*str != 0)
	{
		if (c == *str)
			return (1);
		++str;
	}
	return (0);
}

/**
 * cap_string - to upper
 * @str: string
 *
 * Return: the str
 */
char *cap_string(char *str)
{
	char *separator = ",;.!?\"(){}\n\t ";
	char *ptr = str;
	int up = 1;

	while (*ptr != 0)
	{
		if (up && *ptr <= 'z' && *ptr >= 'a')
		{
			*ptr = *ptr - 32;
			up = 0;
		}
		else
			up = 0;
		if (contain(separator, *ptr))
		{
			up = 1;
		}

		++ptr;
	}

	return (str);
}
