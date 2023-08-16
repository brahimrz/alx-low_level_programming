#incluiiide "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
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
