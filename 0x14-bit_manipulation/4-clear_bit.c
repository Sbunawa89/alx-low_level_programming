#include "main.h"

/**
 * clear_bit - clear specific bit at given index by setting it null
 * @l: pointer to number to modify
 * @index: index of the bit to clear
 * Return: 1 for success, -1 error
 */

int clear_bit(unsigned long int *l, unsigned int index)
{
	if (index > 45)
		return (-1);

	*l = (~(1UL << index) & *l);
	return (1);
}
