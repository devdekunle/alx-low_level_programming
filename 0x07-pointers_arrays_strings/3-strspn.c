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
	int i;
	
	int numAccept = _strlen(accept) + 1;

	for (i = 0; *(s + i); i++)
	{
		if (i + 1 == numAccept)
			return (i + 1);


	}



}
