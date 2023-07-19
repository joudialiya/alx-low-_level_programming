#include "function_pointers.h"

/**
 * print_name - print a name using callbacks
 * @name: name
 * @f: the callback fun
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
