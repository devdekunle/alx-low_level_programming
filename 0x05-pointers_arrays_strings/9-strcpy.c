#include  "main.h"
/**
* _strcpy - copy fromone array to another
*@dest: destination of copy
*@src: source of copy
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);

}
