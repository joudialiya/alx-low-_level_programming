#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * coin - solution
 * @amount: amount
 * @coins: array of a coins
 * @size: siz of the array
 * @current: current sum
 * @min: min so far
 * @depth: depth of the tree
 *
 * Return: succ or not
 */
int coin(int amount, int *coins, int size, int current, int *min, int depth)
{
	int i = 0;

	if (current > amount || depth > 20)
		return (-1);
	if (current == amount)
		if (depth < *min)
			*min = depth;
	while (i < size)
	{
		coin(amount, coins, size, current + coins[i], min, depth + 1);
		++i;
	}
	return (*min);
}

/**
 * main - main program;
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int min = INT_MAX;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("%c\n", '0');
		return (0);
	}

	coin(atoi(argv[1]), coins, 5, 0, &min, 0);
	printf("%d\n", min);
	return (0);
}
