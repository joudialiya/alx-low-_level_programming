#include "main.h"

/**
 * len - length if a str
 * @str: str
 *
 * Return: len
 */
int len(char *str)
{
	int r = 0;

	while (*str != 0)
	{
		++r;
		++str;
	}
	return (r);
}

/**
 * rev - rev a str
 * @str: str
 */
void rev(char *str)
{
	int i = 0;
	int l = len(str);

	while (i < l / 2)
	{
		char tmp = str[l - 1 - i];

		str[l - 1 - i] = str[i];
		str[i] = tmp;
		++i;
	}
}
/**
 * infinite_add - add
 * @n1: num
 * @n2: num
 * @r: num
 * @size: size
 *
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size)
{
	int length = 0;
	int flag = 0;
	int i = 0;

	length = (len(n1) > len(n2)) ? len(n1) : len(n2);

	while ((i < length || flag == 1) && i < size - 1)
	{
		int res = 0;

		if (len(n1) - 1 - i >= 0)
			res += n1[len(n1) - 1 - i] - 48;
		if (len(n2) - 1 - i >= 0)
			res += n2[len(n2) - 1 - i] - 48;
		if (flag == 1)
		{
			res += 1;
			flag = 0;
		}

		flag = res / 10;
		r[i] = '0' + res % 10;

		++i;

	}
	if (i < length || flag == 1)
		return (0);
	rev(r);
	r[i] = 0;
	return (r);

}
