#include "main.h"
/**
 * _islower - checks if a character is lower
 * @c: the character to chacke
 *
 * Return:
 * 1 if the character in lowercase
 * 0 otherways
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
