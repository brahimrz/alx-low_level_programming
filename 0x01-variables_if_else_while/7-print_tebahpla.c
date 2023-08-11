#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Description: putchar alphabit
 * Return: Always 0 (Success)
 */

int main(void)
{
char alph;
for (alph = 'z'; alph >= 'a'; alph--)
putchar(alph);
putchar('\n');
return (0);
}
