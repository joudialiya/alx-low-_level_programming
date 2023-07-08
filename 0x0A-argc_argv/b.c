#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * pnum - print positive int
 * @n: int
 */
void pnum(int n)
{
	if (n >= 10)
		pnum(n / 10);
	putchar('0' + n % 10);
}
/**
 * min_coins - search fun
 * @coins: coins
 * @size: num of coins
 * @amount: target
 *
 * Return: solution
 */
int min_coins(int coins[], int size, int amount)
{
	int list[65535];
	int i, j;

	i = 0;
	while (i <= amount)
	{
		list[i] = INT_MAX;
		++i;
	}
	list[0] = 0;

	i = 1;
	while (i <= amount)
	{
		j = 0;
		while (j < size)
		{
			if (coins[j] <= i)
			{
				int sub = list[i - coins[j]];

				if (sub != INT_MAX)
					list[i] = (list[i] < sub + 1) ? list[i] : sub + 1;
			}
			++j;
		}
	++i;
	}
	return (list[amount]);
}

/**
 * main - func
 * @argc: count
 * @argv: vector
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int size = 5;
	int amount;
	int min;

	if (argc != 2)
	{
		char *str = "Error";

		while (*str != 0)
		{
			putchar(*str);
			++str;
		}
		putchar('\n');
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
		amount = 0;
	min = min_coins(coins, size, amount);
	pnum(min);
	putchar('\n');
	return (0);
}
