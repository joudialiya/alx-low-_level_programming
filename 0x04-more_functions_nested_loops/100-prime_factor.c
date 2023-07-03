#include <stdio.h>

/**
 * main - largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long fact = 2;
	unsigned long max = 0;

	while (n > 1)
	{
		while (n % fact == 0)
		{
			n /= fact;
			if (fact > max)
				max = fact;
		}
		fact++;
	}

	printf("%lu\n", max);
	return (0);
}
