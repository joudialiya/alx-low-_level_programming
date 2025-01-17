#include <stdlib.h>
#include <stdio.h>

void _op(void (*f)(int, char *[]), int);
int _size(void (*f)(int, char *[]));
/**
 * main -print op code starting from the main function
 * @argc: args count
 * @argv: args vector
 */
void main(int argc, char *argv[])
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
}
int _size(void (*f)(int, char *[]))
{
	int i = 0;

	for (i = 0; (((char *)main)[i] & 0xff) != 0xc3; ++i)
	{}

	return (i + 1);
}
/**
 * _op - where the magic happened
 * @f: a function
 * @size: numb of op codes u wanna print
 */
void _op(void (*f)(int, char *[]), int size)
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
