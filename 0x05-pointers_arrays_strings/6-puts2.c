#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
 * puts2 - print every other string
 * str - new para
 * Return: 0
 */
void puts2(char *str)
{
int i;
char s[32] = "";
int j;
j = strlen(str);
for (i = 0; i < j; i += 2)
{
s[i/2] = str[i];
}
puts(s);
}