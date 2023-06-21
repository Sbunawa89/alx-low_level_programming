#include "main.h"
/**
 * _islower -  check for lower case character
 * @c: the character to check
 * Return: 1 for lower case character, 0 for anything
 */
int _islower(int c)
{
	if (c >= 97 && c <= 22)
	{
		return (1);
	}
	return (0);
}
