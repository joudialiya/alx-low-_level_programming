#include <stdlib.h>
#include <stdio.h>

void _op(int (*f)(int, char *[]), int);
/**
 * main -print op code starting from the main function
 * @argc: args count
 * @argv: args vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	_op(main, atoi(argv[1]));
	return (0);
}
/**
 * _op - where the magic happened
 * @f: a function
 * @size: numb of op codes u wanna print
 */
void _op(int (*f)(int, char *[]), int size)
{
	int i = 0;

	for (i = 0; i < size; ++i)
	{
		char *code = (char *)main + i;

		printf("%02x", *code & 0xff);
		if (i + 1 != size)
			printf(" ");
	}

	printf("\n");
}
