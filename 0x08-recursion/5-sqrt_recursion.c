#include "main.h"
/**
*_sqrt_recursion - find the square root of a number
*@n: number to find root
*Return: square root
*/

int _sqrt_recursion(int n)
{

	return (_squareRoot(n, 1));
}

/**
*_squareRoot - find the root of a number
*@n: number to find square root
*@num: number to use to find square root of n
*Return: root
*/
int _squareRoot(int n, int num)
{
	if (n < 0)/*negative numbers don't have square root*/

		return (-1);
	else if (num * num == n) /*num is square root of n*/
		return (num);

	else if (num * num > n) /*num greater than n cannot give square root*/

		return (-1);
	else
		return (_squareRoot(n, num + 1));
}
