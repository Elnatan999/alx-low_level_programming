#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet x10
 * Return: 0
 */
void print_alphabet_x10(void)
{
int x;
char ch;
for (x = 0; x < 10; x++){
for (ch = 'a'; ch <= 'z'; ch++){
_putchar(ch);}
_putchar('\n');}
}
