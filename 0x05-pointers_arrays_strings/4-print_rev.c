#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s:  string, in reverse
 */
void print_rev(char *s)
{
	int i, c, cnt;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	cnt = i;

	for (c = cnt - 1; c >= 0; c--)
		_putchar(s[c]);

	_putchar('\n');
}
