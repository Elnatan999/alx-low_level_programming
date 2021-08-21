#include <stdio.h>
#include "holberton.h"
/**
 * swap_int - swaps values
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
