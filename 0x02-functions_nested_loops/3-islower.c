#include <stdio.h>
#include <ctype.h>
#include "holberton.h"
/**
 * _islower - proves if a char is lower
 * Return: 0
 */
int _islower(int c)
{
if (islower(c))
return 1;
else
return 0;
}
