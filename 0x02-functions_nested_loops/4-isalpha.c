#include "main.h"
/**
 * _isalpha -chekc if character is alpha
 * @c: character to check case
 * Return: 0 or 1
 */

int _isalpha(int c)

{
	return (c >= 65 && c <= 90 || c >= 97 && c <= 122);
}

