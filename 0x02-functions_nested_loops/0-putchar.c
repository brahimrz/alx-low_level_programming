#include <stdio.h>

/**
 * main -  prints _putchar
 * Return: 0
 */
int main(void)
{
	char str[10] = "_putchar\n";

	for (int b = 0; b <= 8; b++)
		putchar(str[b]);
	return (0);
}
