#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - negative or positive
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);
	if (x == 0)
		printf("zero");
	else if (x < 0)
		printf("negative");
	else
		printf("positive");
	printf("\n");
	return (0);
}
