#include <stdio.h>

/**
 * main - Print all the letters except q and e
 * Return: 0
 */
int main(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		if (p != 'e' && p != 'q')
			putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
