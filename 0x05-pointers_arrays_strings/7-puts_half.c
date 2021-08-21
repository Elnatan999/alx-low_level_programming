#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
 * puts_half - cuts in half
 * str - char para
 * Return: 0
 */
void puts_half(char *str)
{
  char right[20];
  int len;
  int i;
  int k;
  int mid;
  len = strlen(str);
  if (len%2 == 0)
    mid = len / 2;
else
    mid = (len - 1) / 2;
  for (i = mid; i <= len; i++){
    for (k = 0; k <= len; k++)
    right[i] = str[i];}
  right[i] = '\0';
  puts(right);
}
