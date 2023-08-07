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
	ssize_t w = 0;
	char buf[2048];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	r = read(fd, buf, letters);

	if (r < 0)
		return (0);
	close(fd);

	w = write(STDOUT_FILENO, buf, (size_t)r);

	if (w < 0 || r != w)
		return (0);

	return (w);
}
