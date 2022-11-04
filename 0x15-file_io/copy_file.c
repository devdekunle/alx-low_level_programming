#include "main.h"
#include "2-strlen.c"

/**
* copy_file - copy from one file to another
*@file1: file to copy from
*@file2: file to copy to
*Return: 0
*/
int copy_file(char *file1, char *file2)
{
	int fd1, fd2;
	char *buff;
	ssize_t size_r, size_w;

	fd1 = open(file1, O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	fd2 = open(file2, O_RDWR | O_CREAT | O_TRUNC | O_APPEND, 00664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", file2);
		exit(99);
	}
	buff = malloc(1024 * sizeof(char));
	if (buff == NULL)
	{
		free(buff);
		exit(98);
	}
	size_r = read(fd1, buff, 1024);
	size_w = write(fd2, buff, size_r);

	if (size_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		free(buff);
		exit(98);	
	}
	if (size_w < 0 || size_w < size_r)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file2);
		free(buff);
		exit(99);
	}
	while (size_r != 0)
	{
		size_r = read(fd1, buff, 1024);
		if (size_r < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
			free(buff);
			exit(98);
		}
		size_w = write(fd2, buff, (size_t)size_r);
		if (size_w < 0 || size_w < size_r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file2);
			free(buff);
			exit(99);
		}
	}
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd1);
		exit(100);
	}
	close(fd1);
	free(buff);
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd2);
		exit(100);
	}
	close (fd2);
	return (0);
}

