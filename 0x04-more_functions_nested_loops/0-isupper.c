#include <stdio.h>
#include <ctype.h>
#include "holberton.h"
/**
 * _isupper - checks for upper case
 * Return: 0
 */
int _isupper(int c)
{
if (isupper(c))
return 1;
else
return 0;
}
