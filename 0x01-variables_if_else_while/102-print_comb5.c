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

	while (i < 99)
	{
		n = i + 1;
		while (n < 100)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (n / 10));
			putchar('0' + (n % 10));

			if (i != 98 || n != 99)
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
