#include "main.h"
#include "2-strlen.c"

int main(int argc, char **argv)
{
	int fd1, fd2;
	char *buff;
	ssize_t size_r, size_w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 00664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		exit(99);
	}
	buff = malloc(1024 * sizeof(char));
	if (buff == NULL)
		exit(98);
	size_r = 1;
	while (size_r != 0)
	{
		size_r = read(fd1, buff, 1024);
		if (size_r < 0)
			exit(100);
		size_w = write(fd2, buff, (size_t)size_r);
		if (size_w < 0)
			exit(100);
		buff = realloc(buff, size_r + 1024);
	}
	free(buff);
	close(fd1);
	if (close(fd1 < 0))
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd1);
		exit(100);
	}
	close(fd2);
	if (close(fd2 < 0))
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}

