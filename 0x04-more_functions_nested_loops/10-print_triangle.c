#include <stdio.h>
#include "holberton.h"
/**
 * print_triangle - prints triangle
 * Return: 0
 */
void print_triangle(int size)
{
int i;
int j;
int k;
int a;
for (i = 1; i <= size; i++)
{
for (j = size; j > i; j--)
{
_putchar(' ');
}
for (k = 1; k <= j; k++)
{
_putchar('#');
}
_putchar('\n');
}
a = 0;
if (a >= size)
_putchar('\n');
}
