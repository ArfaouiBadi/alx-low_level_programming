#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers whose values do not
 * exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int a = 0, b = 1, next, sum = 0;

for (i = 1; i <= 32; ++i)
{
next = a + b;
a = b;
b = next;

if (next % 2 == 0)
{
sum += next;
}
}

printf("%ld\n", sum);

return (0);
}
