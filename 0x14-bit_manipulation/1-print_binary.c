#include "main.h"

/**
 * print_binary - prints A binary representation of decimal numbers
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
