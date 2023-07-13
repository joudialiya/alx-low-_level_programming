#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void _rev(char *s)
{
	int size = strlen(s);
	int i = 0;

	while (i < size)
	{
		char *tmp = s[i];
		s[i] = s[size - 1 - i];
		s[size - 1 - i] = tmp;
		++i;
	}
}

char *array(int size)
{
	char *ptr = 0;
	int i = 0;

	ptr = malloc(size + 1);
	ptr[size] = 0;

	while (i < size)
	{
		ptr[i] = '0';
		++i;
	}
}

char *_add(char *n1, char *n2)
{
	int size = 0;
	char *ptr = 0;
	int i = 0;
	int carry = 0;

	size = strlen(n1) > strlen(n2) ? strlen(n1) : strlen(n2);
	ptr = array(size);

	while (i < size || carry)
	{
		int r = 0;

		if (i < strlen(n1))
			r += n1[i] - '0';
		if (i < strlen(n2))
			r += n2[i] - '0';
		if (carry)
			r += carry;

		if (i >= size)
		{
			ptr = realloc(ptr, size + 2);
			ptr[size + 1] = 0;
			ptr[size] = '0';
		}

		carry = r / 10;
		ptr[i] +=  r % 10 + '0';
	}
}
char *_mul(char *n1, char *n2)
{
	int size = 0;
	char *ptr = 0;
	char *mul = 0;
	int i = 0;
	int j = 0;
	int carry = 0;

	size = strlen(n1) > strlen(n2) ? strlen(n1) : strlen(n2);
	ptr = array(size);

	while (i < strlen(n2))
	{
		carry = 0;
		j = 0;
		mul = array(size);
		while (j < strlen(n1) || carry)
		{
			int r = 0;

			if (j < strlen(n1))
			{
				r += (n1[j] - '0') * (n2[i] - '0');
			}
			if (carry)
				r += carry;
			if (j >= strlen(n1))
			{
				mul = realloc(ptr, size + 2);
				mul[size + 1] = 0;
				mul[size] = '0';
			}

			carry = r / 10;
			ptr[i] +=  r % 10 + '0';
		}
		ptr = _add(ptr, mul);
	}
