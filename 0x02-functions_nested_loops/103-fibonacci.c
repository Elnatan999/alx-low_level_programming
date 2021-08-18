#include <stdio.h>
/**
 * main - returns even sum
 * Return: 0
 */
int main(void)
{
  long int n = 4000000;
  long int ef1 = 1;
  long int ef2 = 2;
  long int sum = ef1 + ef2;
  while (ef2 <= n){
   long int ef3 = 4 * ef2 + ef1;
    if (ef3 > n)
      break;
    ef1 = ef2;
    ef2 = ef3;
    sum = ef2 + sum;
    }
  printf("%ld\n", sum);
  return (0);
}
