#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
 * print_rev - prints rev string
 * Return: 0
 */
void print_rev(char *s)
{
  char r[100];
  int b;
  int e;
  int c;
  c = 0;
  while (s[c] != '\0'){
    c++;}
  e = c - 1;
  for (b = 0; b < c; b++){
    r[b] = s[e];
    e--;}
  r[b] = '\0';
  puts(r);
  }
