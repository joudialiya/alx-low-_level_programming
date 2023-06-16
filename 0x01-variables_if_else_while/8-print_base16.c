#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: 0;
 */
int main(void)
{
	char *str = "0123456789abcdef";
	char *ptr = str;

	while (*ptr != '\0')
	{
		putchar(*ptr++);
	}
	putchar('\n');
	return (0);
}
