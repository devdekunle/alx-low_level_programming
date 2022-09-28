#include "main.h"
/**
*_pow_recursion - get the exponent of a number
*@x: num 1
*@y: num 2
*Return: index
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);

	}
	else if (y > 0)
	{
		return 	(x * _pow_recursion(x, y-1));
		
	}
	else 
	return (-1);


}
