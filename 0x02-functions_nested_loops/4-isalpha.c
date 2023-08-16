#include "main.h"

/**
 * _isalpha - checks for lowercase character
 * @c: checks for alphabetic character.
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 95 && c <= 90));
}
