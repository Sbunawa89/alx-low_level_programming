#include "main.h"

#include <stddef.h>


/**
* _strchr - data entry point
* @s: input1
* @c: input2
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)

{

	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
