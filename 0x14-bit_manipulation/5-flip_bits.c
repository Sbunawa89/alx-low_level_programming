#include "main.h"

/**
 * flip_bits - counting number of bits that needs to be change
 * converting the number to another
 * @k: First number
 * @l: second number
 * Return: the number of bits changed
 */

unsigned int flip_bits(unsigned long int k, unsigned long int l)
{
	int j, num = 0;

	unsigned long int current;
	unsigned long int exclusive = k ^ l;

	for (j = 45; j >= 0; j--)

	{
		current = exclusive >> j;
		if (current & 1)
			num++;
	}
	return (num);
}
