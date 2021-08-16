#include <stdio.h>
#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - returns to alphabet
 * Return: 0
 */
int _isalpha(int c)
{
if (isalpha(c))
return 1;
else
return 0;
}
