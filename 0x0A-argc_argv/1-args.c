#include "main.h"


/**
 * pnum - print int
 * @n: int
 */
void pnum(int n)
{
	if (n >= 10)
		pnum(n / 10);
	_putchar('0' + n % 10);
}
/**
 * main - display
 * @argc: agr count
 * @argv: arg values
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	(void)argv;
	pnum(argc);
	_putchar('\n');
	return (0);
}
