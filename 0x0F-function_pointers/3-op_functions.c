#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*op_add - add two integers
*@a: first integer
*@b: second integer
*Return: a + b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - subtract two numbers
*@a: first integer
*@b: second integer
*Return: a - b
*/
int op_sub(int a, int b)
{
	return (a - b);

}

/**
*op_mul - multiply two numbers
*@a: first integer
*@b: second integer
*Return: a * b
*/
int op_mul(int a, int b)
{
	return (a * b);

}

/**
*op_div - divide two numbers
*@a: first integer
*@b: second integer
*Return: a / b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

}

/**
*op_mod - remainder of the division of two numbers
*@a: first integer
*@b: seconf integer
*Return: a % b
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);

	}
	return (a % b);

}
