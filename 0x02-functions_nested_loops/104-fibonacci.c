#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    int a = 1, b = 2, next;

    printf("%d, %d", a, b);

    for (i = 3; i <= 98; ++i)
    {
        next = a + b;
        a = b;
        b = next;

        printf(", %d", next);
    }

    printf("\n");
    return 0;
}

