#include "3-calc.h"

/**
 * main - a simple calculator utilizing function ptr and callback
 * @argc: args count
 * @argv: args vector
 *
 * Return: the status
 */
int main(int argc, char *argv[])
{
	int (*callback)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	callback = get_op_func(argv[2]);

	if (callback == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((!strcmp(argv[2], "%") || !strcmp(argv[2], "/")) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*callback)(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
