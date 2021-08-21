#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
 * rev_string - reverse string
 * s - s type parameter
 * Return: 0
 */
void rev_string(char *s)
{
int i;
char temp;
int j;
int len;
j = strlen(s);
len = strlen(s) - 1;
for (i = 0; i < j / 2; i++)
{
temp = s[i];
s[i] = s[len];
s[len--] = temp;
}
}
