#include "main.h"

/* Function prototype for print_alphabet */
void print_alphabet(void);

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    print_alphabet();

    return (0);
}

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
        _putchar(c);

    _putchar('\n');
}
