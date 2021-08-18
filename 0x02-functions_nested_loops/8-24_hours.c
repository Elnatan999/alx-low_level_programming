#include <stdio.h>
#include "holberton.h"
/**
 * jack_bauer - print minute
 * Return: 0
 */
void jack_bauer(void)
{
int n;
int c;
 for (c = 00; c < 60; c++)
   for (n = 00; n < c; n++)
     _putchar(n);
 _putchar(':');
 _putchar(c);
}
