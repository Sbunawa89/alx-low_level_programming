#include "main.h"
/**
 * print_sign - To print the sign of a number
 * @n: character to be checked
 * Return: 1 for positive num, -1 negetive num, and 0 for anything else
 */
int print_sign(int n)
{
	if (n >0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(45);
		return (0);
	}
}
