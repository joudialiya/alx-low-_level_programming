#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: 0;
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar('0'+c);
		++c;
	}
	putchar('\n');
	return (0);
}
