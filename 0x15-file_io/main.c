#include "main.h"
#include <stdio.h>

int main(void)
{
	int fd;
	char buf[1024];
	ssize_t r = 0;
	char *file = NULL;

	fd = open(file, O_RDONLY);

	printf("->%d\n", fd);

	r = read(fd, buf, 128);

	printf("->%ld\n", r);
	
	return (0);
}
