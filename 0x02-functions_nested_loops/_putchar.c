#include <unistd.h>
/**
 * main - _putchar writes the character c to stdout
 * Return: Always  0 (success)
 * an error, -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
