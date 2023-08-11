#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the last digit of the number
 * Return:0
 */
int main(void)
{
	int n;
	int z;

	z = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, z);
	if (z > 5)
		printf("and is greater than 5");
	else if (z == 0)
		printf("and is 0");
	else if (z < 6 && z != 0)
		printf("and is less than 6 and not 0");

	return (0);
}
