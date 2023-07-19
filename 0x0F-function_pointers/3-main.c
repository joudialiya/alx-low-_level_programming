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
		error(98);

	callback = get_op_func(argv[2]);

	if (callback == NULL)
		error(99);

	if ((strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") == 0) && atoi(argv[3]) == 0)
		error(100);

	printf("%d\n", (*callback)(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
