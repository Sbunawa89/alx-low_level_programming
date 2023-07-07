#include "main.h"


/**
* _isupper - the program to print upper case letter
* @c: Is the character to check
* Return: for success 0 or 1
*/

int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
