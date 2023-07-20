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
	int valid = 0;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case ('c'):			
				valid = 1;
				printf("%c", va_arg(args, int));
			break;
			case ('i'):
				valid = 1;
				printf("%d", va_arg(args, int));
			break;
			case ('f'):
				valid = 1;
				printf("%f", va_arg(args, double));
			break;
			case ('s'):
				valid = 1;
				str = va_arg(args, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
			break;
		}
		if (format[i + 1] != '\0' && valid)
			printf(", ");
		valid = 0;
		++i;
	}

	printf("\n");
	va_end(args);
}
