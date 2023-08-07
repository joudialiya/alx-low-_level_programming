#include "main.h"
#include "stdio.h"

#define MODE (S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH)

/**
 * main - cp progrm
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd[2], i = 0;
	char buf[1024];
	ssize_t r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd[0] = open(argv[1], O_RDONLY);
	if (fd[0] < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd[1] = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, MODE);
	if (fd[1] < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	while ((r = read(fd[0], buf, 1024)) > 0)
	{
		w = write(fd[1], buf, (size_t)r);
		if (w < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}
	while (i < 2)
		if (close(fd[i]) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd[i]);
			return (100);	
		}
	return (0);
}
