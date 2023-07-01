#include "main.h"

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
void rev(char *str)
{
	int i = 0;
	int l = len(str);

	while (i < l/2)
	{
		char tmp = str[l - 1 - i];
		str[l - 1 - i] = str[i];
		str[i] = tmp;
		++i;
	
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
	int flag = 1;
       	int i = 0;

	length = (len(n1) > len(n2)) ? len(n1) : len(n2);

	while (i < length && i < size - 1)
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
		r[i] = '0' + r % 10;

		++i;

	}
	if (i >= size)
	{
		r[0] = '0';
		i = 1; 
		while (i < size)
			r[i] = 0;
	}
	else
	{
		rev(r);
		r[i] = 0;
	}

	return (r);

}
