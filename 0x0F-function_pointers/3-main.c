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
	int (*math)(int, int);
	/*check if arguement is 4*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*check if operator symbol is correct by calling the get_op_func*/
	/*and also get address of right function to use for operation*/
	math = get_op_funct(argv[2]);
	if (!math)
	{
		printf("Error\n");
		exit(99);

	}
	/*pass second and fourth arguement to function and print result*/
	printf("%d\n", math(atoi(argv[1]), atoi(argv[3])));
	return (0);


}
