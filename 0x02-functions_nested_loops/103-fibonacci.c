#include <stdio.h>

/**
 * main - fibounacci
 *
 * Return: 0
 */
int main(void)
{
	long int n0 = 1;
	long int n1 = 2;
	long int tmp = 0;
	long int result = 1;

	while (n1 <= 4000000)
	{
		tmp = n0;
		n0 = n1;
		n1 += tmp;
		if (n1 % 2 == 0)
			resutl += n1;
	}
	printf("%d\n", result);
	return (0);
}
