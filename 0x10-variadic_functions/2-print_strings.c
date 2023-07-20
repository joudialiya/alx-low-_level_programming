#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings passed separated by @separator
 * @separator: separator
 * @n: number of char * passed
 *
 * Return: sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		char *str = va_arg(args, char *);

		printf("%s", str == NULL ? "(nil)" : str);

		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
		++i;
	}

	printf("\n");
	va_end(args);
}
