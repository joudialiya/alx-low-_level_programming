#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print var num of types passed separated by @separator
 * @format: str containing code format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str = NULL;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case ('c'):
				printf("%c", va_arg(args, int));
			break;
			case ('i'):
				printf("%d", va_arg(args, int));
			break;
			case ('f'):
				printf("%f", va_arg(args, double));
			break;
			case ('s'):
				str = va_arg(args, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
			break;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		++i;
	}

	printf("\n");
	va_end(args);
}
