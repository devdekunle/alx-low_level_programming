#include "main.h"
#include "2-strlen.c"
/**
*_strncat - concatenate two strings
*@src: string to append from
*@dest: string to append to
*@n: number of bytes before loop termination
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int destLen = _strlen(dest);
	int i;

	for (i = 0; src[i] <= n; i++)
	{
		dest[i + destLen] = src[i];

	}
	dest[i + destLen] = '\0';
	return (dest);
}
