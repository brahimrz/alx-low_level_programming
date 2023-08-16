#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase,
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int w;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (w = 'a'; w <= 'z'; w++)
			_putchar(w);
		_putchar('\n');

	}
}
