#include "main.h"


/**
 * pnum - print int
 * @n: int
 */
void pnum(int n)
{
	if (n >= 10)
		print(n / 10);
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

	print(argc);
	_putchar('\n');
	return (0);
}
