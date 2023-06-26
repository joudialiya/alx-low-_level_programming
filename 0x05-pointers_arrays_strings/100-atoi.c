#include "main.h"

/**
 * _pow - power of a number
 * @a: number
 * @n: power
 *
 * Return: powe of the num
 */
int _pow(int a, int n)
{
	int i = 0;
	int res = 1;

	while (i < n)
	{
		res = res * a;
		++i;
	}
	return (res);
}

/**
 * is_num - is a number
 * @c: char
 *
 * Return: 0
 */
int is_num(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

/**
 * _atoi - parse a str to extrat an int
 * @str: str
 *
 * Return: int
 */
int _atoi(char *str)
{
	char *tracker = str;
	int offset = 0;
	int negative = 0;
	int res = 0;

	while (*tracker != '\0')
	{
		if (*tracker == '-')
			++negative;

		if (is_num(*tracker))
		{

			while (is_num(*(tracker + offset)))
				++offset;

			if (offset == 0)
				continue;

			while (offset > 0)
			{
				if (*tracker != '-' || *tracker != '+')
					res += (*tracker - '0') * _pow(10, offset - 1);
				++tracker;
				--offset;
			}

			if (negative % 2 == 1)
				res *= -1;
			break;
		}
		++tracker;
	}

	return (res);
}
