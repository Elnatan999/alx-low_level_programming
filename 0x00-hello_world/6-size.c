#include <stdio.h>

int main()
{
  char chartype;
  int inttype;
  long int longinttype;
  long long int longlonginttype;
  float floattype;

  printf("size of char: %zu byte(s) \n", sizeof(chartype));
  printf("size of int: %zu byte(s) \n", sizeof(inttype));
  printf("size of long int: %zu byte(s) \n", sizeof(longinttype));
  printf("size of long long int: %zu byte(s) \n", sizeof(longlonginttype));
  printf("size of float: %zu byte(s) \n", sizeof(floattype));
  return (0);
}
