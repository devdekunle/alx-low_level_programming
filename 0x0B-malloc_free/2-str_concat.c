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
	int i;

	if (s1 == NULL || s2 == NULL)
	{

	}
	strCat = (char *)malloc((_strlen(s1) + _strlen(s2)) + 8 * sizeof(char));
	if (strCat != NULL)
	{
		for(i = 0; *(s2 + i); i++)
		{
			*(s1 + _strlen(s1) + i) = *(s2 + i);

		}
		for (i =  0; *(s1 + i); i++)
		{
			*(strCat + i) = *(s1 + i);

		}
		*(strCat + i) = '\0';
		return (strCat);
		/*free(strCat);*/

	}
	else
		return (NULL);
}
