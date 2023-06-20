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
	int index = 0;

	while (index < 50)
	{
		printf("%d", n0 + n1);
		if (index != 49)
			printf(",");
		++index;
	}
	printf("\n");
	return (0);
}
