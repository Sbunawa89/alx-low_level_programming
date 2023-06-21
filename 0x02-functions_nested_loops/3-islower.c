#include "main.h"
/**
 * _islower - to check for lower case character
 * @c: character to check
 * Return: 1 for lowercase character, 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	return (0);
}
