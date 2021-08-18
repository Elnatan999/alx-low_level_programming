#include <stdio.h>
/**
 * main - prints fibonacci numbers upto 50
 * Return: 0
 */
int main(void)
{
  int i;
  int t1 = 1;
  int t2 = 2;
  int nextterm = 0;
  int n = 50;
  printf("%d, %d, ", t1, t2);
  nextterm = t1 + t2;
  for (i = 3; i <= n; ++i)
    {
      printf("%d, ", nextterm);
      t1 = t2;
      t2 = nextterm;
      nextterm = t1 + t2;
    }
  return (0);
}
