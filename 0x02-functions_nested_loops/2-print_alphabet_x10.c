#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet(void)
{
	int i;
int b;
for (i = 0 ; i < 10 ; i++)
{
for (b = 'a' ; b <= 'z' ; b++)
_putchar(b);
_putchar('\n');
}
}
