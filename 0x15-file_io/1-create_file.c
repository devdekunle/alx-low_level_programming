#include "main.h"
#include "2-strlen.c"
/**
*create_file - create a file
*@filename: name of the file
*@text_content: content to put in file
*Return: -1 or 1
*/

int create_file(const char *filename, char *text_content)
{
	int fileDes, x;
	ssize_t size_w;
	size_t len;

	x = _strlen(text_content);
	len = x;

	if (!(filename))
		return (-1);

	fileDes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);

	if (fileDes < 0)
		return (-1);
	if (!text_content)
		return (1);

	size_w = write(fileDes, text_content, len);

	if (size_w < 0)
		return (-1);
	return (1);

}
