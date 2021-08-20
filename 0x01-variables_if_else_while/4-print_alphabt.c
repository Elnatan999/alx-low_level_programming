#include <stdio.h>
/**
 * main - prints without q and e
 * Return: 0
 */
int main(void)
{
  char ch;
  for(ch = 'a';ch <= 'z';ch++)
    for(ch != 'e';ch != 'q';ch++)
      putchar(ch);
  putchar('\n');
  /**
   * main - prints without q and e
   * Return: 0
   */
return (0);
}
