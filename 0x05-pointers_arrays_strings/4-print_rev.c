#include "main.h"

/**
 * print_rev - print the string in reverse
 * @str: string
 */
void print_rev(char *str)
{
	char *ptr = str;

	while (*(ptr + 1) != '\0' || *ptr == '\0')
		++ptr;
	while (ptr != str)
		_putchar(*ptr--);
	_putchar(*ptr);
	_putchar('\n');
}
