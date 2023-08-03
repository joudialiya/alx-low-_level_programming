#include "main.h"

/**
 * binary_to_uint - binary rep to uint
 * @b: binary form
 *
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		r = r << 1;
		r = r | ((*b == '0') ? 0x0 : 0x1);
		++b;
	}
	return (r);
}
