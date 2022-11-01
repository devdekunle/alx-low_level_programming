#include "main.h"

/**
*read_textfile - read from file
*@filename: file
*@letters: letters
*Return: 0 or number of characters read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDes;
	ssize_t size_r, size_w, x;
	char *buffer;

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	x = letters;
	if (filename == NULL)
		return (0);
	fileDes = open(filename, O_RDONLY);
	if (fileDes < 0)
		return (0);
	size_r = read(fileDes, buffer, letters);
	if (size_r < 0)
		return (0);
	size_w = write(STDOUT_FILENO, buffer, letters);
	free(buffer);
	if (size_w < 0 || size_w < x)
		return (0);
	close(fileDes);
	return (size_r);
}
