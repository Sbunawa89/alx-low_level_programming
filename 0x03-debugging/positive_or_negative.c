#include "main.h"
/**
 * positive_or_negetive - determine if a number is positive, negetive or zero
 * i: number to check
 * Return: 0 A success
 */
void positive_or_negetive(int i)
{
	int i;
	

	if (i < 0)
	{
	printf("%d is %s\n", i, "negetive");
	}
	else if (i > 0)
	{
	printf("%d is %s\n", i, "positive");
	}
	else
	{
	printf("%d is %s\n", i, "zero");
	}
	return (0);
}
