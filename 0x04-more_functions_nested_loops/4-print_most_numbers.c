#include <stdio.h>
#include "holberton.h"
/**
 * print_most_numbers - prints numbers
 * Return: 0
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
_putchar(48 + i);
}
_putchar('\n');
}
