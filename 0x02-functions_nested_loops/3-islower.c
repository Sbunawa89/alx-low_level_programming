#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 * Return: 1 for lowercase character or 0 else
 */
int _islower(int c)
{
 int c = 'a';
  if (_islower(c)) 
  {
    printf("The character '%c' is lowercase.\n", c);
  }
  else 
  {
    printf("The character '%c' is not lowercase.\n", c);
  }
  return 0;
}
