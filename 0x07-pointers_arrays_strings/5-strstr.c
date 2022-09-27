#include "main.h"
/**_strstr - locate  substring within a string
*@needle: string to locate
*@heystack: string to check for substring
kjj*@Return: needle
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, c = i;
	char *word;
	for (i = 0; *(haystack + i); i++)
	{
		for (j = 0; *(needle + j); j++)
		
		{
			if (*(haystack + i) == *(needle + j))
			{
					*(word + c) = *(haystack + i);
					c++;

					return(word);
				
			}
		}

	}

	return('\0');
}
