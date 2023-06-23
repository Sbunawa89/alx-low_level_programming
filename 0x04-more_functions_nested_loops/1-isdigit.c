#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: character to be checked up on
 * Return: 1  for digit, 0 for something else
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
	return (1);
}
return (0);
}
