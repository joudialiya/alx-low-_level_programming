#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -  gen a random key
 *
 * Return 0
 */
int main(void)
{
	char str[64] = "zzzzzzzzzzzzzzzzzzzzzzz";
	int index = 0;

	srand(time(NULL));
	
	index = rand() % 23;
	str[index] = 'X';

	printf("%s", str);
	
	return (0);
}
