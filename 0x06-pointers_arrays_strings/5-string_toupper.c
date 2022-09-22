#include "main.h"
/**
*string_toupper - change string to upper case
*@n: string to change
*Return: char
*/

char *string_toupper(char *n)
{
	int cap = 'a' - 'A';
	int i = 0;

	for (i = 0; *(n + i); i++)
	{
		if (n >= 'a' && n <= 'z')
		{
			*(n + i) -= cap;


		}


	}
	return (n);

}
