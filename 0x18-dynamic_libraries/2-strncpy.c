#include"main.h"
/**
*_strncpy - copy string from src to dest
*@src: string to copy from
*@dest: string to copy to
*@n: byte limit
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		*(dest + i) = *(src + i);

	}
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
