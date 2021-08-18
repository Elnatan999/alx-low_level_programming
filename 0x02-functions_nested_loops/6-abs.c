#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "holberton.h"
/**
 * _abs - absolute value
 * Return: 0
 */
int _abs(int c)
{
if (c < 0)
c = (-1) * c;
return c;
}
