#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
/**
*_strdup - duplicate string
*@str: string to duplicate
*Return: NULL or pointer to string
*/
char *_strdup(char *str)
{
	char *ptrStrDup;

	if (str == NULL)
		return (NULL);

	ptrStrDup = (char *)malloc(_strlen(str) * sizeof(char));

	if (ptr != NULL)
	{
		for (i = 0; *(str + i); i++)

		{
			*(ptrStrDup + i) = *(str + i);

		}
		*(ptrStrdup + i) = '\0';

	return (ptrStrDup);
	free(ptrStrDup);
	}
	else
		return (NULL);

}
