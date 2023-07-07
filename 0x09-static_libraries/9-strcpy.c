#include "main.h"


/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: string to copy to
* @src: string to copy from
* Return: string
*/

char *_strcpy(char *dest, char *src)

{

	int m = 0;

	int n = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for ( ; n < m ; n++)
	{
		dest[n] = src[n];
	}
	dest[m] = '\0';
	return (dest);
}
