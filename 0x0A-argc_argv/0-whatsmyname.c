#include "main.h"

/**
 * main - display
 * @argc: agr count
 * @argv: arg values
 *
 * Return 0;
 */
int main(int argc, char *argv[])
{
	char *ptr = argv[0];

	while (*ptr != 0)
	{
		_putchar(*ptr);
		++ptr;
	}
	_putchar('\n');
	return (0);
}
