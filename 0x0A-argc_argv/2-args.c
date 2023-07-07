#include "main.h"

/**
 * main - display
 * @argc: agr count
 * @argv: arg values
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i = 0;
	char *ptr;

	while (i < argc)
	{
		ptr = argv[i];
		while (*ptr != 0)
		{
			_putchar(*ptr);
			++ptr;
		}
		_putchar('\n');
		++i;
	}
	return (0);
}
