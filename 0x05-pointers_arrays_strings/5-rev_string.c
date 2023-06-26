#include "main.h"

/**
 * rev_string -  reverse a str
 * @str: str
 */
void rev_string(char *str)
{
	int len = 0;
	int index = 0;

	while (*(str + len) != '\0')
		++len;

	while (index < len / 2)
	{
		char tmp;

		tmp = *(str + index);
		*(str + index) = *(str + len - 1 - index);
		*(str + len - 1 - index) = tmp;
		++index;
	}
}
