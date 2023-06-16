#include <stdio.h>

/**
 * main - program that print combinations of 2 num
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int n = 0;

	while (i < 10)
	{
		n = 0;
		while (n < 10)
		{
			putchar('0' + i);
			putchar('0' + n);
			if (i != 9 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
			++n;
		}
		++i;
	}
	putchar('\n');

	return (0);
}
