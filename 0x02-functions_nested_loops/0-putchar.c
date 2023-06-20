#include "main.h"

/**
 * main - utilizing the _putchar function
 *
 * Return: 0
 */
int main(void)
{
	char *str = "_putchar\n";
	char *ptr = str;

	while (*ptr != '\0')
	{
		_putchar(*ptr++);
	}
	return (0);
}
