#include "main.h"

/**
* _memset - to  fill  block of memory with specified value
* @s: the  starting address of memory to be filled
* @b: desired value
* @n: is number of bytes to be changed
* Return: the changed array with new value for n number of bytes
*/

char *_memset(char *s, char b, unsigned int n)

{

	int y = 0;

	for (; n > 0; y++)
	{
		s[y] = b;

		n--;
	}
	return (s);
}
