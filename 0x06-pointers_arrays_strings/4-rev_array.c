#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int r, z, tmp;

	z = n - 1;

	for (r = 0; r < n / 2; r++)
	{
		tmp = a[r];
		a[r] = a[z];
		a[z--] = tmp;
	}
}
