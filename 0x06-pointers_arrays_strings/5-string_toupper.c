#include "main.h"
/**
*string_toupper - change string to upper case
*@str: string to change
*Return: char
*/

char *string_toupper(char *str)
{
	int alphaRng = 'a' - 'A';
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= alphaRng;


		}


	}
	return (str);

}
