#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main: last digit
 * Return = 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
 if (n>5)