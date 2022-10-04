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
	int i;

	if (str == NULL)
		return (NULL);
	/*allocate memory based on size of str*/

	ptrStrDup = (char *)malloc(_strlen(str) + 1  * sizeof(char));

	/*if returned pointer is not null and memory was allocated*/
	if (ptrStrDup != NULL)
	{	/*assign each character of str to ptrStrDup*/
		for (i = 0; *(str + i); i++)

		{
			*(ptrStrDup + i) = *(str + i);

		}
		*(ptrStrDup + i) = '\0';

	return (ptrStrDup);
	free(ptrStrDup);
	}
	else
		return (NULL);

}
