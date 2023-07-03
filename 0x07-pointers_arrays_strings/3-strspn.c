#include "main.h"
/**
 * _strspn - occurrence of each char of @accept in s
 * @s: str
 * @accept: accept
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int r = 0;
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
		if (accept[index] == 0)
			break;

		++r;
		++s;
	}

	return (r);
}
