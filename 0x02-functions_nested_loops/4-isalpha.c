#include "main.h"
/**
 * _isalpha - to check for alphabetic character
 * @c: character to be check
 * Return: 1 for alphabetic character, 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
