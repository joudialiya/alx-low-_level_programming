#include "main.h"

/**
 * rot13 - rot 13
 * @str: str
 *
 * Return: str
 */
char *rot13(char *str)
{
	int i = 0;
	char *look = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *up = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != 0)
	{
		int n = 0;

		while (look[n] != 0)
		{
			if (look[n] == str[i])
			{
				str[i] = up[n];
				break;
			}
		       ++n;
		}
		++i;
	}
}
