#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
/**
*string_nconcat - Concatenate two strings
*@s1: string 1
*@s2: string 2
*@n: number of bytes to copy
*Return: poiner to concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strCat;
	unsigned int i, j;

		/*if string is NULL, convert it to an empty string*/
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		if (n >= _strlen(s2))
			n = _strlen(s2);

	/*allocate new memory based on size of s1 and s2*/
	strCat = (char *)malloc(sizeof(char) * (_strlen(s1) + n + 1));

	if (strCat != NULL)
	{	/*copy each character from s1 to strCat*/
		for (i = 0; i < _strlen(s1); i++)
		{
			*(strCat + i) = *(s1 + i);

		}
		for (j = 0; j < n; i++, j++)
		{	/*append each character from s2 to strCat*/
			*(strCat + i) = *(s2 + j);
		}
		*(strCat + i) = '\0';
		return (strCat);
	}
	else
	{	/*return NULL if allocation of memory fails*/

		return (NULL);
	}
}
