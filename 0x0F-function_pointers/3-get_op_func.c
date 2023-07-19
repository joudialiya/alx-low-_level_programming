#include "3-calc.h"

/**
 * get_op_func - select the op callback function
 * @s: str contain the op as a string
 *
 * Return: ptr to a callback function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && ops[i].f != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
