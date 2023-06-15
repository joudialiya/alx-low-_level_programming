#include <stdio.h>
/**
 * main - print to the strerr
 *
 * Return: 1
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(strerr, "%s\n", str);
	return (1);
}
