#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int rz;

	for (rz = 0; rz < argc; rz++)
	{
		printf("%s\n", argv[rz]);
	}

	return (0);
}
