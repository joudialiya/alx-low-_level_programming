#include <stdio.h>

/**
 * main - fibounacci
 *
 * Return: 0
 */
int main(void)
{
	int n0 = 1;
	int n1 = 2;
	int tmp = 0;
	int index = 2;

	while (index < 50)
	{
		printf("%d", n0 + n1);
		tmp = n0;
		n0 = n1;
		n1 += tmp;
		if (index != 49)
			printf(",");
		++index;
	}
	printf("\n");
	return (0);
}
