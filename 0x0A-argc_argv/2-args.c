#include <stdio.h>
/**
*main - Entry
*@argc: number of arguments
*@argv: pointer array to arguemnts
*Return: 0
*/
int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);


}
