#include "main.h"

/**
 * get_endianness - to determine if the machine is big or little endian
 * Return: 0 big endian, 1 for little
 */

int get_endianness(void)

{

	unsigned int j = 1;

	char *q = (char *) &j;

	return (*q);
}
