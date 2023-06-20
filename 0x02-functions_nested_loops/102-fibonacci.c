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
	int index = 2;
	
	printf("%ld, ", n0);
	printf("%ld, ", n0);
	while (index < 50)
	{
		printf("%ld", n0 + n1);
		tmp = n0;
		n0 = n1;
		n1 += tmp;
		if (index != 49)
			printf(", ");
		++index;
	}
	printf("\n");
	return (0);
}
