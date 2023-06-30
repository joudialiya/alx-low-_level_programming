#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print - char or '.'
 * @c: char
 */
void print(int c)
{
	printf("%c", (isprint(c)) ? c : '.');
}
/**
 * padding - padding ()
 * @n: num
 */
void padding(int n)
{
	int i = 0;

	while (i < n)
	{
		printf(" ");
		++i;
	}
}

/**
 * print_buffer - print buffers
 * @b: buffer
 * @size: size
 */
void print_buffer(char *b, int size)
{
	int row_index = 0;
	int char_index = 0;
	int term = 0;
	int i = 0;
	char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (1)
	{
		char_index = 0;
		printf("%08x:", row_index * 10);
		while (char_index < 10)
		{
			if (char_index % 2 == 0)
				printf(" ");
			printf("%02x", *(b + row_index * 10 + char_index));
			++char_index;
			if (row_index * 10 + char_index >= size)
			{
				padding(25 - char_index * 2 - char_index / 2);
				term = 1;
				break;
			}
		}
		printf(" ");
		i = 0;
		while (i < char_index)
		{
			print(*(b + row_index * 10 + i));
			++i;
		}
		if (term)
			break;
		printf("\n");
		++row_index;
	}
}
