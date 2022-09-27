#include "main.h"
#include "2-strlen.c"
/**
*_strspn - function to calculate null byte of a segmentin a string
*@s: string to check
*@accept: segment to check
*Return: length of accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;
	

	for (i = 0; *(s + i ) >= '\0'; i++)
	{
		for (j = 0; *(accept + j) > '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;

			}


		}
		if (*(accept + j) == '\0')
			break;
	}
	return (count);

}
