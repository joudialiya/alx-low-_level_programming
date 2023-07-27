#include <stdio.h>

void _yeal_(void) __attribute__((constructor));

/**
 * _yeal_ - yeal something before main
 */
void _yeal_(void)
{
	char *str =
		"You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n";
	printf("%s", str);
}
