#include "main.h"
#include "2-strlen.c"
/**
*append_text_to_file - append exit to file
*@filename: filename
*@text_content: content
*Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, buffLen;


	if (!filename)
		return (-1);
		/*open file and set to append */
	fd = open(filename, O_RDWR & O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (-1);
		/*count number of charcters to be appended to file*/
	buffLen = _strlen(text_content);
	write(fd, text_content, (size_t)(buffLen));
	close (fd);
	return (1);
}
