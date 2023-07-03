#include "main.h"
/**
 * _strpbrk - sub str @accept in s
 * @s: str
 * @accept: accept
 *
 * Return: ptr
 */

char *_strpbrk(char *s, char *accept)
{

	int index = 0;

	while (*s != 0)
	{
		index = 0;

		while (accept[index] != 0)
		{
			if (accept[index] == *s)
				break;
			++index;
		}
		if (accept[index] != 0)
			return (s);
		++s;

	}

	return (0);
}
