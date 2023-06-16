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
	int d = 0;

	while (i < 8)
	{
		n = i + 1;
		while (n < 9)
		{
			d = n + 1;
			while (d < 10)
			{
				putchar('0' + i);
				putchar('0' + n);
				putchar('0' + d);

				if (i != 7 || n != 8 || d != 9)
				{
					putchar(',');
					putchar(' ');
				}
				++d;
			}
			++n;
		}
		++i;
	}
	putchar('\n');

	return (0);
}
