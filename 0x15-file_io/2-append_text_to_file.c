#include "main.h"

/**
 * append_text_to_file - append to a file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int w = 0;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	w = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (w < 0)
		return (-1);

	return (1);
}

/**
 * _strlen - strlen cpy
 * @str: string
 *
 * Return: length
 */
int _strlen(char *str)
{
	int r = 0;

	while (*str != 0)
	{
		++r;
		++str;
	}
	return (r);
}
