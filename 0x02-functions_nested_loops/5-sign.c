#include <stdio.h>
#include "holberton.h"
/**
 * print_sign - prints the sign
 * Return: 0
 */
int print_sign(int n)
{
  if (n > 0)
    _putchar('+');
  else if (n < 0)
    _putchar('-');
  else
    _putchar('0');

  if (n > 0)
    return 1;
  else if (n < 0)
    return -1;
  else
    return 0;
}
