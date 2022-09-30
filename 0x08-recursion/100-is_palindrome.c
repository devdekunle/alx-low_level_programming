#include "main.h"
#include "2-strlen.c"
/**
*is_palindrome - check if a word is palindrome
*@s: string to check
*Return: 0 or 1
*/
int is_palindrome(char *s)
{
	return (checkPalindrome(s, 0, _strlen(s) - 1));

}


/**
*checkPalindrome - check is string is palindrome
*@s: string to check
*@startAddress: start address of string
*@endAddress: end address of string
*Return: 0 or 1
*/

int checkPalindrome(char *s, int startAddress, int endAddress)
{

	/*check for an empty string and a single character string*/
	if (_strlen(s) == 0 || _strlen(s) == 1)

		return (1);
		/*check if characters at start and end of string are same */
	else if (*(s + startAddress) != *(s + endAddress))

		return (0);
		/*if addresses are equal, string is palindrome*/
	else if ((s + startAddress) >= (s + endAddress))

		return (1);
	/*if character at start address and end address are equal, recurse*/
	else if (*(s + startAddress) == *(s + endAddress))


		return (checkPalindrome(s, startAddress + 1, endAddress - 1));
	return (0);
}

