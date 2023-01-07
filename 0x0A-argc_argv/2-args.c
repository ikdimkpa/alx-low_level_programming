#include <stdio.h>
#include "main.h"

/**
 * main - Prints all input arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	do {
		printf("%s\n", argv[i]);
		if (i == argc)
			printf("%s", argv[i]);
		i++;
	} while (i < argc);

	return (0);
}
