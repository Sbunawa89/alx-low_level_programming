#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specify index in decimal numbers
 * @m: the number to search for
 * @index: the index of the bit
 * Return: The value of bit at given index
 */

int get_bit(unsigned long int m, unsigned int index)
{

	int bit_val;

		if (index > 63)
			return (-1);

	bit_val = (m >> index) & 1;
	return (bit_val);
}
