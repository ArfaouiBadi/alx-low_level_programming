#include "main.h"
/**
 * sum_multiples_3_5 - Computes the sum of all multiples of 3 or 5 below n
 * @n: The upper limit of the range to check for multiples
 *
 * Return: The sum of all multiples of 3 or 5 below n
 */
int sum_multiples_3_5(int n)
{
int sum = 0;
int i;
for (i = 0; i < n; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
 return (sum);
}
int main(void)
{
printf("%d\n", sum_multiples_3_5(1024));
return (0);
}
