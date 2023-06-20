#include <stdio.h>

/**
 * main - fibounacci
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int n0 = 1;
	unsigned long int n1 = 2;
	unsigned long int tmp = 0;
	int index = 2;

	printf("%lu, ", n0);
	printf("%lu, ", n1);
	while (index < 100)
	{
		printf("%lu", n0 + n1);
		tmp = n0;
		n0 = n1;
		n1 += tmp;
		if (index != 99)
			printf(", ");
		++index;
	}
	printf("\n");
	return (0);
}
