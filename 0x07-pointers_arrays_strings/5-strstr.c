#include "main.h"
/**
 * _strstr - sub str @accept in s
 * @s: str
 * @accept: accept
 *
 * Return: ptr
 */

char *_strstr(char *s, char *accept)
{

	int index = 0;

	while (*s != 0)
	{
		index = 0;

		while (accept[index] != 0 && *(s + index) != 0)
		{
			if (accept[index] != *(s + index))
				break;
			++index;
		}
		if (accept[index] == 0)
			return (s);
		++s;

	}

	return (0);
}
