#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - last digit is
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d and ", n, n % 10 );
	if(n % 10 < 6)
		printf("is less than 6 and not 0");
	else if (n % 10 == 0)
		printf("is 0");
	else
		printf("is greater than 5");	
	return (0);
}
