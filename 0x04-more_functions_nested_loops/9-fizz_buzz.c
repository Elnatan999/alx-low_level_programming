#include <stdio.h>
#include "holberton.h"
/**
 * main - fizz buzz
 * Return: 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i%15 == 0)
printf("FizzBUZZ ");
else if (i%5 == 0)
printf("Buzz ");
else if (i%3 == 0)
printf("Fizz ");
else
printf("%d ", i);
}
printf("\n");
return (0);
}
