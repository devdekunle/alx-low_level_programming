#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
/**
*str_concat - Concatenate two strings
*@s1: string 1
*@s2: string 2
*Return: poiner to concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *strCat;
	int i, j;
		/*if string is NULL, convert it to an empty string*/
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
	/*allocate new memory based on size of s1 and s2*/
	strCat = (char *)malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (strCat != NULL)
	{	/*copy each character from s1 to strCat*/
		for (i = 0; i < _strlen(s1); i++)
		{
			*(strCat + i) = *(s1 + i);

		}
		for (j = 0; j < _strlen(s2); i++, j++)
		{	/*append each character from s2 to strCat*/
			*(strCat + i) = *(s2 + j);
		}

		return (strCat);
	}
	else
	{	/*return NULL if allocation of memory fails*/
		free(strCat);
		return (NULL);
	}
}
