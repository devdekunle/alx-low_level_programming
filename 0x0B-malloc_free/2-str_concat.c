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

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";

	strCat = (char *)malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (strCat != NULL)
	{
		for(i = 0; *(s1 + i) != '\0'; i++)
		{
			*(strCat + i) = *(s1 + i);

		}
		for (j = 0; *(s2 + j) != '\0'; j++)
		{
			*(strCat + _strlen(strCat) + j) = *(s2 + j);

		}

		return (strCat);
	}
	else
	{
		free(strCat);
		return (NULL);
	}
}
