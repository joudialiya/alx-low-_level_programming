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
		_putchar(c);
		if (c == 'z')
		{
			_putchar('\n');
		}
		if (c == 'z' && i < 9)
		{
			++i;
			c = 'a';
		}
		else
			++c;
	}
}

