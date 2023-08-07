#include "main.h"

/**
 * create_file - print a fect file
 * @filename: filename
 * @text_content
 *
 * Return: 1 or -1 
 */
ssize_t create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int r = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	r = write(fd, STDOUT_FILE, _strlen(text_content));

	if (r == -1)
		return (-1);

	return (1);
}
