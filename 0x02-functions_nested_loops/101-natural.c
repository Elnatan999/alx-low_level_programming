#include <stdio.h>
#include <time.h>
/**
 * main - prints natural numbers
 * Return: 0
 */
int main(void)
{
int x = 3;
int y = 5;
int n = 1023;
int sum = 0;
sum = x * ((n/x) * ((n/x) + 1)/2) + y * ((n/y) * ((n/y) + 1)/2) - x * y * (n/(x * y)) * ((n/(x*y)) + 1)/2;
printf("%d\n", sum);
return (0);
}
