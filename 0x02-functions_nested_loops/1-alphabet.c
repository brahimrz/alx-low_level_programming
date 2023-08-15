#include "main.h"

/**
 * print_alphabet -  function that prints the alphabet, in lowercase
 * Returne: 0
 */
void print_alphabet(void)
{
	int b;

	for (b = 97; b <= 122; b++)
		_putchar(b);
	_putchar('\n');
}
