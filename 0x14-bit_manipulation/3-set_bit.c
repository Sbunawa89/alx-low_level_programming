#include "main.h"

/**
 * set_bit - set a certain bit at given index to 1
 * @k: the pointer to the number to modify
 * @index: The index of bit to set to 1
 * Return: 1 success, -1 error
 */

int set_bit(unsigned long int *k, unsigned int index)

{
	if (index > 63)
		return (-1);

	*k = ((1UL << index) | *k);
	return (1);
}
