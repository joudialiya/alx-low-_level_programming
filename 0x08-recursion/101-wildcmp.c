#include "main.h"

/**
 * wildcmp - compare two strings with a twist
 * @s1: str 1
 * @s2: str 2 may comain the * char that reppresent any string
 *
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);

	if (*s2 == '*')
	{
		int r = 0;

		if (*s1 != 0)
			r |= wildcmp(s1 + 1, s2);
		return (r || wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
