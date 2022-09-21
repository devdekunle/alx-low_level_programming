#include "main.h"
#include "2-strlen.c"
/**
*_strcat - concatenate two strings
*@src: string to append from
*@dest: string to append to
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int destLen = _strlen(dest);
	int i;
	for (i = 0; src[i]; i++)
	{
		dest[i + destLen] = src[i];

	}
	dest[i + destLen] = '\0';
	return (dest);
}
