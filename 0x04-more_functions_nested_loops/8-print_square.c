#include <stdio.h>
#include "holberton.h"
/**
 * print_square - prints square pattern
 * Return: 0
 */
void print_square(int size)
{
int x;
int y;
int i;
for (x = 0; x < size; ++x)
{
for (y = 0; y < size; ++y){
_putchar('#');
}
_putchar('\n');
}
i = 0;
if (i >= size)
_putchar('\n');
}
