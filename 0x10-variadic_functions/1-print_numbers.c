#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers passed separated by @separator
 * @separator: separator
 * @n: number of int passed
 *
 * Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
		++i;
	}

	printf("\n");
	va_end(args);
}
