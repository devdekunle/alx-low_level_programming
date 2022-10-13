#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*@argc: arguement count
*@argv: arguement vector
*Return: 0
*/
int main(int argc, char **argv)
{
	int (*mathOpr)(int, int);
	/*check if arguement is 4*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*check if operator symbol is correct by calling the get_op_func*/
	/*and also get address of right function to use for operation*/
	mathOpr = get_op_func(argv[2]);
	if (!mathOpr)
	{
		printf("Error\n");
		exit(99);

	}
	/*pass second and fourth arguement to function and print result*/
	printf("%d\n", mathOpr(atoi(argv[1]), atoi(argv[3])));
	return (0);


}
