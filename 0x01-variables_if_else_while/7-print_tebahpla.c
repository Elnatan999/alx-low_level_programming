#include <stdio.h>
#include <string.h>
/**
 * main - print reverse
 * Return: 0
 */
int main(void)
{
char word;
char x;
char end;
for (word = 'a'; word <= 'z'; word++)
end = sizeof(word) - 1;
for (x = end; x >= 0; x--)
putchar(x);
putchar('\n');
/**
 * main - print reverse
 * Return: 0
 */
return (0);
}
  
