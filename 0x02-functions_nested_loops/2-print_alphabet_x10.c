#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet(void)
{
	char b;
	int a;

	a = 0;

	while (a < 10)
	{
		b = 'a';
			while (b <= 'z')
			{
				_putchar('b');
					b++;
			}
			_putchar('\n');
		a++;
	}
}
