#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (c <= 'z')
	{
		_putchar (c);
		if (c == 'z' && i < 9)
			c = 'a';
		else
			c++;
	}
}
