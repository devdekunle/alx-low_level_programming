#include "main.h"
/**
*is_prime_number - check if number is prime
*@n: number to check
*Return: 1 or 0
*/
int is_prime_number(int n)
{
	return (_primeNum(n, 2));

}


/**
*_primeNum - check prime number
*@n: number 1
*@num: number 2
*Return: prime
*/

int _primeNum(int n, int num)
{
	if (num >= n && n > 1)

		return (1);
	else if (n % num == 0 || n <= 1)

		return (0);
	else
		return (_primeNum(n, num + 1));
}
