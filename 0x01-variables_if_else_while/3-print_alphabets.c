#include <stdio.h>
/**
 * main - Entry point
 * Description: putchar alphabit
 * Return: Always 0 (Success)
 */

int main(void)
{
char alph;
char alpha;
for (alph = 'a'; alph <= 'z'; alph++)
putchar(alph);
for (alpha = 'A'; alpha <= 'Z'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
