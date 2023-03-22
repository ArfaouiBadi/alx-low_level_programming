#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int a = 0, b = 1, next;

for (i = 1; i <= 50; ++i)
{
next = a + b;
a = b;
b = next;

printf("%ld", next);

if (i != 50)
printf(", ");
}

printf("\n");
return (0);
}
