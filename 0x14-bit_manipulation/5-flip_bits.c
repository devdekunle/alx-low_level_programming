#include "main.h"
/**
*flip_bits - flip bits
*@m: first num
*@n: second num
*Return: count
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, numFlip = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			numFlip++;
		n >>= 1;
		m >>= 1;


	}
	return (numFlip);

}
