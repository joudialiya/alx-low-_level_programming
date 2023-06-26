#include "main.h"

/**
 * _puts - print a str
 * @str: str
 */
void _puts(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
		_putchar(*ptr++);
	_putchar('\n');

}
