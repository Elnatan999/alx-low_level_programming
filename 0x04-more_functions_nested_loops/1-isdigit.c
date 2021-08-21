#include <stdio.h>
#include <ctype.h>
#include "holberton.h"
/**
 * _isdigit - checks for digit
 * Return: 0
 */
int _isdigit(int c)
{
if (isdigit(c) == 0)
return 0;
else
return 1;
}
