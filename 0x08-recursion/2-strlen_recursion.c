#include "main.h"

/**
 * _strlen_recursion - str len
 * @s: str;
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (!s == 0)
		return (0);
	return (1 + strlen_recursion(++s));
}
