#include "main.h"
#include "copy_file.c"
/**
*main - Entry Point
*@argc: arguement count
*@argv: arguement vector
*Return: 0
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	}
	copy_file(argv[1], argv[2]);
	return (0);
	}
