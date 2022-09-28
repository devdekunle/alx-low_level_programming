#include "main.h"
/**
*factorial -  calculate the factorial of a number
*@n: number to calculate
*Return: factorial
*/
int factorial(int n)
{
	if (n == 0)

		return (1);
	else if (n > 0)
	{
		n = n * factorial(n - 1);
		return (n);
	}
	else if (n < 0)
		return (-1);
}
