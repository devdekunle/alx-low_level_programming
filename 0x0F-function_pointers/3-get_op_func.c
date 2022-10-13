#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
*get_op_func - choose function to use
*@s: operator passed
*Return: pointer to function
*/
int (*get_op_func(char *s))(int, int)
{
	/*array of structure with each structure, consisting*/
	/*of the symbol for the operation and pointer to the right function*/
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	}
	int i = 0;

	while (i < 5)
	{
		/*compare symbol of each struct with input and rturn address to*/
		/*function to use*/
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f)
		i++;

	}
	return (0);
}

