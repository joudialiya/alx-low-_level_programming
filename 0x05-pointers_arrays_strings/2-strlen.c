#include "main.h"

/**
 * _strlen - count the num of chars
 * @str: string
 *
 * Return: number of chars
 */
int _strlen(char *str)
{
	int length = 0;

	while (*(str + length) != '\0' &&  ++length)
	{}

	return (length);
}
