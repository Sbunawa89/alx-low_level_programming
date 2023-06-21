#include "main.h"
/**
 * print_last_digit - to prints the last digit if a number
 * @n: character to be treated
 * Return: value of the last digit of number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (lst);
}
