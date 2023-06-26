#include "main.h"

/**
 * puts_half - print half the string
 * @str: str
 */
void puts_half(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
		++len;

	if (len % 2 == 1)
		++len;
	len /= 2;

	while (*(str _ len) != '\0')
	{
		_putchar(*(str + len));
		++len;
	}
}
