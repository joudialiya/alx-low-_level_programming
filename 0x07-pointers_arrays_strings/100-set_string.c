#include "main.h"

/**
 * set_string -  mem leak
 * @s: ptr str
 * @to: str
 */
void set_string(char **s, char *to)
{

	*s = to;
}
