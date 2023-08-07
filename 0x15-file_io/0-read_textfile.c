#include "main.h"

/**
 * read_textfile - print a fect file
 * @filename: filename
 * @letters: letters it should print
 *
 * Return: bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t r = 0;
	char buf[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, buf, letters);

	if (r <= 0)
		return (0);

	r = write(STDOUT_FILENO, buf, (size_t)r);

	if (r < 0)
		return (0);

	return (r);
}
