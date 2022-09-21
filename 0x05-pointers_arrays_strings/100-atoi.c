#include "main.h"
/**
*_atoi - convert string to integer
*@s: string to chang
*Return: 0
*/

int _atoi(char *s)
{
	int startVal, i, num, sign = -1;

	for (startVal = 0; !(s[startVal] >= 48 && s[startVal] <= 57); startVal++)
	{
		if (s[startVal] == '-')
		{
			sign = sign * -1;
		}
	}

	for (i = 0; (s[i] >= 48 && s[i] <= 57); i++)
	{

		num = num * 10 + (s[i] - 48);

	}
	return (num * sign);


}
