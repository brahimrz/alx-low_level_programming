#include "main.h"
/**
* print_numbers - print numbers using _putchar
* Return: return 0 (Success)
*/
void print_numbers(void)
{
char nb = '0';
while (nb <= '9')
{
_putchar(nb);
nb++;
}
_putchar('\n');
}
