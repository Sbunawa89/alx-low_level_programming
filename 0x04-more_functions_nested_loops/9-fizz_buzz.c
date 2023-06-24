#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the num 1 - 100 w/
 * Fizz for multiple of 3, Buzz for multiple of 5
 * FizzBuzz for multiple of both
 * Return: 0 success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 15 == 0)
	printf("FizzBuzz");
	else if (i % 3 == 0)
	printf("Fizz");
	else if (i % 5 == 0)
	printf("Buzz");
	else
	printf("%i", i);
	if (i < 100)
	printf(" ");
	}
	printf("\n");
	return (0);
}
