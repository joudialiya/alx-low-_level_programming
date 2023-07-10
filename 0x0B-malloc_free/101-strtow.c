#include "main.h"

/**
 * _memncpy - cpy bytes
 * @dest: dest
 * @src: source
 * @n: num
 */
void _memncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}

}
/**
 * wcount - count words
 * @s: str
 *
 * Return: int
 */
int wcount(char *s)
{
	int r = 0;

	while (*s != 0)
	{
		if (*s == ' ')
		{
			++r;
			while (*s == ' ')
				++s;
		}
		if (*s == 0)
			break;
		++s;
	}
	return (r + 1);
}
/**
 * strtow - return array of words
 * @str: string
 *
 * Return: the array
 */
char **strtow(char *str)
{
	int size = 0;
	char **r = 0;
	int i = 0;

	size = wcount(str);

	r = (char **)malloc(sizeof(char *) * (size + 1));

	if (r == 0)
		return (0);

	r[size] = 0;
	while (1)
	{
		int word = 0;

		while (str[i] == ' ')
			++i;
		if (str[i] == 0)
			break;

		while (str[i + word] != ' ' && str[i + word] != 0)
		{
			++word;
		}

		r[i] = malloc(sizeof(char) * (word + 1));
		_memncpy(r[i], str + i, word);
		r[word] = 0;
		i += word;
	}
	return (r);
}
