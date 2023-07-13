#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates a memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 * if malloc fails, status value is equal to 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
