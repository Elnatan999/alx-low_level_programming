#include <stdio.h>
#include <math.h>
int main(void)
{
  long int n;
  long int max;
  int i;
  max = -1;
  n = 612852475143;
  while (n%2 == 0)
    {
      max = 2;
  n /= 2;
    }
  while (n%3 == 0)
    {
      max = 3;
      n = n/3;
    }
  for (i = 5; i <= sqrt(n); i += 6)
    {
      while (n%i == 0)
	{
	  max = i;
	  n = n/i;
	}
      while (n%(i + 2) == 0)
	{
	  max = i + 2;
	  n = n/(i + 2);
	}
    }
  if (n > 4)
    max = n;
  return max;
}