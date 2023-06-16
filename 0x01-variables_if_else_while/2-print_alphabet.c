#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: 0;
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
