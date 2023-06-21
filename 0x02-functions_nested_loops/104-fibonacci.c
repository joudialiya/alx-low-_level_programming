#include <stdio.h>
#define DEL 1000000000

void print_n(unsigned long part1, unsigned long part2)
{
	if(part2 == 0)
		printf("%lu", part1);
	else
		printf("%lu%09lu", part2, part1);
}

/**
 * main - fibounacci
 *
 * Return: 0
 */
int main(void)
{
	/* part2-part1 */
	unsigned long int n0_part1 = 1;
	unsigned long int n0_part2 = 0;

	unsigned long int n1_part1 = 2;
	unsigned long int n1_part2 = 0;

	unsigned long int tmp_part1 = 0;
	unsigned long int tmp_part2 = 0;
	int index = 2;

	print_n(n0_part1, n0_part2);
	printf(", ");
	print_n(n1_part1, n1_part2); 
	printf(", ");
	while (index < 98)
	{
		tmp_part1 = n0_part1 + n1_part1;
		tmp_part2 = n0_part2 + n1_part2;
		if (tmp_part1 / DEL != 0)
		{
			tmp_part1 %= DEL;
			tmp_part2 += 1;
		
		}
		print_n(tmp_part1, tmp_part2);
		n0_part1 = n1_part1;
		n0_part2 = n1_part2;

		n1_part1 = tmp_part1;
		n1_part2 = tmp_part2;
		if (index != 97)
			printf(", ");
		++index;
	}
	printf("\n");
	return (0);
}
