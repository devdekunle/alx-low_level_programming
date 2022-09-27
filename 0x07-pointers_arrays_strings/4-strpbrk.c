#include "main.h"
/**
*_strpbrk - locate the first byte of a string in another sting
*@s: string to search
*@accept: string to use to check
*Return: s
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	/*take a character in s and search for a match in accept*/
	for (i = 0; *(s + i) >= '\0'; i++)
	{

		for (j = 0; *(accept + j) >= '\0'; j++)
		{
			/*if match is found, return address of first instance of match*/
			if (*(s + i) == *(accept + i))
			{

				return (s + i);

			}
		}

	}
	return ('\0');

}
