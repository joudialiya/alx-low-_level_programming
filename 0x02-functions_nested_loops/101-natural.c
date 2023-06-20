#include <stdio.h>

/**
 * main - natural
 *
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int result = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
		++i;
	}
	printf("%d\n", result);
	return (0);
}
