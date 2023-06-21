#include "main.h"
/**
 * main - Entry point to print_alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar("%c", ch);
	}
	_putchar('\n');
}
